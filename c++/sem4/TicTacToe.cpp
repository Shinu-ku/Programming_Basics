#include "raylib.h"


int board[3][3] = {0}; // 0 = Empty, 1 = Player 1, 2 = Player 2
int currentPlayer = 1;
bool gameEnded = false;
int winner = 0;

void DrawBoard() {
    
    DrawLine(200, 0, 200, 600, BLACK); 
    DrawLine(400, 0, 400, 600, BLACK); 
    DrawLine(0, 200, 600, 200, BLACK); 
    DrawLine(0, 400, 600, 400, BLACK); 
}

void DrawMarkers() {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (board[row][col] == 1) {
                DrawText("X", 100 + col * 200 - 50, 100 + row * 200 - 50, 100, RED);
            } else if (board[row][col] == 2) {
                DrawText("O", 100 + col * 200 - 50, 100 + row * 200 - 50, 100, BLUE);
            }
        }
    }
}

int CheckWinner() {
    for (int i = 0; i < 3; i++) {
    
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0) return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0) return board[0][i];
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0) return board[0][2];

    
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (board[row][col] == 0) return 0;

    return -1; 
}

int main() {
    InitWindow(600, 600, "Tic Tac Toe");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        if (!gameEnded) {
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                Vector2 mouse = GetMousePosition();
                int row = mouse.y / 200;
                int col = mouse.x / 200;

                if (row < 3 && col < 3 && board[row][col] == 0) {
                    board[row][col] = currentPlayer;
                    winner = CheckWinner();
                    if (winner > 0) {
                        gameEnded = true;
                    } else if (winner == -1) {
                        gameEnded = true;
                    } else {
                        currentPlayer = (currentPlayer == 1) ? 2 : 1;
                    }
                }
            }
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawBoard();
        DrawMarkers();

        if (gameEnded) {
            if (winner > 0) {
                DrawText(TextFormat("Player %d Wins!", winner), 150, 270, 50, GREEN);
            } else {
                DrawText("It's a Tie!", 200, 270, 50, ORANGE);
            }
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
