#include "raylib.h"
#include <deque>

const int screenWidth = 800;
const int screenHeight = 600;
const int gridSize = 20; // Size of each grid cell
const int gameWidth = screenWidth / gridSize;
const int gameHeight = screenHeight / gridSize;

enum Direction { UP, DOWN, LEFT, RIGHT };

struct Vector2Int {
    int x, y;
};

class SnakeGame {
private:
    std::deque<Vector2Int> snake;
    Vector2Int food;
    Direction dir;
    bool gameOver;

    void PlaceFood() {
        food.x = GetRandomValue(0, gameWidth - 1);
        food.y = GetRandomValue(0, gameHeight - 1);
    }

public:
    SnakeGame() {
        Reset();
    }

    void Reset() {
        snake.clear();
        snake.push_back({ gameWidth / 2, gameHeight / 2 });
        dir = RIGHT;
        gameOver = false;
        PlaceFood();
    }

    void Update() {
        if (gameOver) return;

        // Handle input
        if (IsKeyPressed(KEY_UP) && dir != DOWN) dir = UP;
        if (IsKeyPressed(KEY_DOWN) && dir != UP) dir = DOWN;
        if (IsKeyPressed(KEY_LEFT) && dir != RIGHT) dir = LEFT;
        if (IsKeyPressed(KEY_RIGHT) && dir != LEFT) dir = RIGHT;

        // Move snake
        Vector2Int head = snake.front();
        switch (dir) {
        case UP: head.y--; break;
        case DOWN: head.y++; break;
        case LEFT: head.x--; break;
        case RIGHT: head.x++; break;
        }

        // Check collision with walls
        if (head.x < 0 || head.y < 0 || head.x >= gameWidth || head.y >= gameHeight) {
            gameOver = true;
            return;
        }

        // Check collision with itself
        for (const auto& segment : snake) {
            if (segment.x == head.x && segment.y == head.y) {
                gameOver = true;
                return;
            }
        }

        // Add new head
        snake.push_front(head);

        // Check food collision
        if (head.x == food.x && head.y == food.y) {
            PlaceFood(); // Generate new food
        } else {
            snake.pop_back(); // Remove tail if no food eaten
        }
    }

    void Draw() const {
        BeginDrawing();
        ClearBackground(BLACK);

        // Draw snake
        for (const auto& segment : snake) {
            DrawRectangle(segment.x * gridSize, segment.y * gridSize, gridSize, gridSize, GREEN);
        }

        // Draw food
        DrawRectangle(food.x * gridSize, food.y * gridSize, gridSize, gridSize, RED);

        // Draw game over
        if (gameOver) {
            DrawText("GAME OVER!", screenWidth / 2 - 100, screenHeight / 2 - 20, 40, RED);
            DrawText("Press R to Restart", screenWidth / 2 - 120, screenHeight / 2 + 40, 20, WHITE);
        }

        EndDrawing();
    }

    void CheckRestart() {
        if (gameOver && IsKeyPressed(KEY_R)) {
            Reset();
        }
    }
};

int main() {
    InitWindow(screenWidth, screenHeight, "Snake Game - raylib");
    SetTargetFPS(10);

    SnakeGame game;

    while (!WindowShouldClose()) {
        game.Update();
        game.CheckRestart();
        game.Draw();
    }

    CloseWindow();
    return 0;
}
