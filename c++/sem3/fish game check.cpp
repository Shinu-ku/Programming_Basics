// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

// Game Variables
int money = 500;
int crab = 0, shrimp = 0, trout = 0, flounder = 0, shark = 0, salmon = 0;
int net = 0, cage = 0, harpoon = 0, rod = 0, flyrod = 0;
int boat1 = 0, boat2 = 0, boat3 = 0, boat4 = 0;
int shrimprate = 1, crabrate = 1, troutrate = 1, flounderrate = 1, sharkrate = 1, salmonrate = 1;

// User info
map<string, string> accounts; // Stores usernames and passwords

void displayMenu();
void boatStore();
void fishingLoop();
void createNewAccount();
void login();
void saveGame(string username);
void loadGame(string username);

int main() {
    int choice;

    while (true) {
        cout << "Fishing RPG\n";
        cout << "1) Login\n";
        cout << "2) Create New Account\n";
        cout << ">> ";
        cin >> choice;

        if (choice == 1) {
            login();
        } else if (choice == 2) {
            createNewAccount();
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

void displayMenu() {
    int choice;
    while (true) {
        cout << "Fishing RPG Menu\n";
        cout << "1) Go Fish'n\n";
        cout << "2) Boat Store\n";
        cout << "3) Save Game\n";
        cout << "4) Exit\n";
        cout << ">> ";
        cin >> choice;

        switch (choice) {
        case 1:
            fishingLoop();
            break;
        case 2:
            boatStore();
            break;
        case 3: {
            string username;
            cout << "Enter your username to save the game: ";
            cin >> username;
            saveGame(username);
            break;
        }
        case 4:
            cout << "Exiting game...\n";
            return;
        default:
            cout << "Invalid choice, please try again.\n";
        }
    }
}

void boatStore() {
    int choice;
    cout << "Welcome to the Boat Store!\n";
    cout << "1) Shrimp'n Boat (2000 Gold)\n";
    cout << "2) Small Boat (20,000 Gold)\n";
    cout << ">> ";
    cin >> choice;

    if (choice == 1 && money >= 2000) {
        money -= 2000;
        boat1++;
        shrimprate += 5;
        cout << "You bought the Shrimp'n Boat!\n";
    } else if (choice == 2 && money >= 20000) {
        money -= 20000;
        boat2++;
        troutrate += 10;
        cout << "You bought the Small Boat!\n";
    } else {
        cout << "Not enough money or invalid choice.\n";
    }
}

void fishingLoop() {
    cout << "You go fishing...\n";
    // Simulate fishing logic here
}

void createNewAccount() {
    string username, password;
    cout << "Enter a new username: ";
    cin >> username;

    if (accounts.find(username) != accounts.end()) {
        cout << "Username already exists.\n";
        return;
    }

    cout << "Enter a password: ";
    cin >> password;

    // Save account information
    accounts[username] = password;

    // Save to file (persistent storage)
    ofstream accountFile(username + ".txt");
    accountFile << password << endl;
    accountFile.close();

    cout << "Account created successfully! You can now log in.\n";
}

void login() {
    string username, password;
    cout << "Enter your username: ";
    cin >> username;

    ifstream accountFile(username + ".txt");
    if (!accountFile.is_open()) {
        cout << "Invalid username.\n";
        return;
    }

    string storedPassword;
    accountFile >> storedPassword;
    accountFile.close();

    cout << "Enter your password: ";
    cin >> password;

    if (password == storedPassword) {
        cout << "Login successful!\n";
        loadGame(username);
        displayMenu();
    } else {
        cout << "Invalid password.\n";
    }
}

void saveGame(string username) {
    ofstream saveFile(username + "_save.txt");
    saveFile << money << endl;
    saveFile << shrimp << " " << trout << " " << flounder << " " << shark << " " << salmon << endl;
    saveFile << boat1 << " " << boat2 << " " << boat3 << " " << boat4 << endl;
    saveFile.close();
    cout << "Game saved successfully!\n";
}

void loadGame(string username) {
    ifstream saveFile(username + "_save.txt");
    if (saveFile.is_open()) {
        saveFile >> money;
        saveFile >> shrimp >> trout >> flounder >> shark >> salmon;
        saveFile >> boat1 >> boat2 >> boat3 >> boat4;
        saveFile.close();
        cout << "Game loaded successfully!\n";
    } else {
        cout << "No saved game found. Starting a new game...\n";
    }
}

