#include <iostream>
#include <string>
#include <map>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

// Variables for user login and data
string username, password, enteredUsername, enteredPassword;

// Player data
int boat[8] = {0}; // Array to hold the boat purchases
int money = 500;
int crab = 0, shrimp = 0, trout = 0, flounder = 0, shark = 0, salmon = 0;
int net = 0, cage = 0, harpoon = 0, rod = 0, flyrod = 0;
int boat1 = 0, boat2 = 0, boat3 = 0, boat4 = 0;
int shrimprate = 1, crabrate = 1, troutrate = 1, flounderrate = 1, sharkrate = 1, salmonrate = 1;

map<string, string> accounts; // Stores usernames and passwords

// Prices for fish
const int SHRIMP_PRICE = 5;
const int CRAB_PRICE = 10;
const int TROUT_PRICE = 15;
const int SALMON_PRICE = 25;
const int SHARK_PRICE = 50;


// Function declarations
void startMenu();
void login();
void saveGame(string username);
void loadGame(string username);
void fishingLoop();
void createNewAccount();
void fishingMenu();
void boatStore();
void store();
void buyBoat(int boatIndex, int price, int& rate, const string& fishType);
void buyItem(int& item, int price, const string& itemName);
void checkItems();
void goFishing();

int main() {
    // Seed random number generator
    srand(time(0));

    // Start the game
    startMenu();
    return 0;
}

// Functions to simulate fishing
void fishWithNet() {
    int shrimpCaught = rand() % 5 + 1; // Randomly catch 1 to 5 shrimp
    shrimp += shrimpCaught;
    cout << "You caught " << shrimpCaught << " shrimp!" << endl;
}

void fishWithCage() {
    int crabCaught = rand() % 3 + 1; // Randomly catch 1 to 3 crabs
    crab += crabCaught;
    cout << "You caught " << crabCaught << " crabs!" << endl;
}

void fishWithRod() {
    int troutCaught = rand() % 4 + 1; // Randomly catch 1 to 4 trout
    trout += troutCaught;
    cout << "You caught " << troutCaught << " trout!" << endl;
}

void fishWithFlyRod() {
    int salmonCaught = rand() % 2 + 1; // Randomly catch 1 to 2 salmon
    salmon += salmonCaught;
    cout << "You caught " << salmonCaught << " salmon!" << endl;
}

void fishWithHarpoon() {
    int sharkCaught = rand() % 1 + 1; // Randomly catch 1 shark
    shark += sharkCaught;
    cout << "You caught " << sharkCaught << " shark!" << endl;
}

void startMenu() {
    int choice;
    do {
        system("cls");
        cout << "Input a number and press enter . . ." << endl;
        cout << "1) Login" << endl;
        cout << "2) Create New Account" << endl;
        cout << ">> ";
        cin >> choice;

        if (choice == 1) {
            login();
        } else if (choice == 2) {
            createNewAccount();
        } else {
            cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 1 && choice != 2);
}

void login() {
    system("cls");
    cout << "Enter Username: ";
    cin >> enteredUsername;

    cout << "Enter Password: ";
    cin >> enteredPassword;

    // Load user data from file
    ifstream file("user_data.txt");
    if (file.is_open()) {
        file >> username;
        file >> password;
        file >> money;
        file >> shrimp;
        file >> crab;
        file >> trout;
        file >> flounder;
        file >> shark;
        file >> salmon;
        file >> net;
        file >> cage;
        file >> harpoon;
        file >> rod;
        file >> flyrod;
        for (int i = 0; i < 8; i++) {
            file >> boat[i];
        }
        file.close();

        if (enteredUsername == username && enteredPassword == password) {
            fishingMenu();
        } else {
            cout << "Invalid username or password." << endl;
            system("pause");
            startMenu();
        }
    } else {
        cout << "No user data found. Please create a new account." << endl;
        system("pause");
        startMenu();
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


void createNewAccount() {
    system("cls");
    cout << "What do you want your username to be? ";
    cin >> username;

    cout << "What do you want your password to be? ";
    cin >> password;

    // Save user data to file
    ofstream file("user_data.txt");
    file << username << endl;
    file << password << endl;
    file << money << endl;
    file << shrimp << endl;
    file << crab << endl;
    file << trout << endl;
    file << flounder << endl;
    file << shark << endl;
    file << salmon << endl;
    file << net << endl;
    file << cage << endl;
    file << harpoon << endl;
    file << rod << endl;
    file << flyrod << endl;
    for (int i = 0; i < 8; i++) {
        file << boat[i] << endl;
    }
    file.close();

    fishingMenu();
}
void sellFish() {
    cout << "\nFish Market\n";
    cout << "1. Sell Shrimp: " << shrimp << " (Price: " << SHRIMP_PRICE << " each)\n";
    cout << "2. Sell Crabs: " << crab << " (Price: " << CRAB_PRICE << " each)\n";
    cout << "3. Sell Trout: " << trout << " (Price: " << TROUT_PRICE << " each)\n";
    cout << "4. Sell Salmon: " << salmon << " (Price: " << SALMON_PRICE << " each)\n";
    cout << "5. Sell Sharks: " << shark << " (Price: " << SHARK_PRICE << " each)\n";
    cout << "6. Go back to menu\n";
    
    int choice;
    cout << "Choose an option to sell: ";
    cin >> choice;

    int earnings = 0;
    switch(choice) {
        case 1:
            earnings = shrimp * SHRIMP_PRICE;
            money += earnings;
            shrimp = 0;
            cout << "Sold all shrimp for " << earnings << " Gold.\n";
            break;
        case 2:
            earnings = crab * CRAB_PRICE;
            money += earnings;
            crab = 0;
            cout << "Sold all crabs for " << earnings << " Gold.\n";
            break;
        case 3:
            earnings = trout * TROUT_PRICE;
            money += earnings;
            trout = 0;
            cout << "Sold all trout for " << earnings << " Gold.\n";
            break;
        case 4:
            earnings = salmon * SALMON_PRICE;
            money += earnings;
            salmon = 0;
            cout << "Sold all salmon for " << earnings << " Gold.\n";
            break;
        case 5:
            earnings = shark * SHARK_PRICE;
            money += earnings;
            shark = 0;
            cout << "Sold all sharks for " << earnings << " Gold.\n";
            break;
        case 6:
            cout << "Returning to menu...\n";
            break;
        default:
            cout << "Invalid option!\n";
            break;
    }
}

void fishingMenu() {
    int choice;
    do {
        system("cls");
        cout << "Fishing RPG Menu" << endl;
        cout << "1) Go Fish'n" << endl;
        cout << "2) Store" << endl;
        cout << "3) Boat Shop" << endl;
        cout << "4) Check Items" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice) {
            case 1:
                goFishing();
                system("pause"); // Add a pause here
                break;
            case 2:
                store();
                break;
            case 3:
                boatStore();
                break;
            case 4:
                checkItems();
                break;
            case 5:
            	sellFish();
            	break;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    } while (true);
}




void boatStore() {
    int choice;
    do {
        system("cls");
        cout << "Fishing RPG Boat Store" << endl;
        cout << "You currently have " << money << " Gold." << endl;
        cout << "1) Shrimp'n Boat: " << boat[0] << " (Costs 2,000 Gold)" << endl;
        cout << "2) Small Boat: " << boat[1] << " (Costs 20,000 Gold)" << endl;
        cout << "3) Large Boat: " << boat[2] << " (Costs 60,000 Gold)" << endl;
        cout << "4) Rich Boat: " << boat[3] << " (Costs 150,000 Gold)" << endl;
        cout << "5) Pro Boat: " << boat[4] << " (Costs 500,000 Gold)" << endl;
        cout << "6) Dream Boat: " << boat[5] << " (Costs 1,000,000 Gold)" << endl;
        cout << "7) Elegant Boat: " << boat[6] << " (Costs 3,000,000 Gold)" << endl;
        cout << "8) Titanic: " << boat[7] << " (Costs  10,000,000 Gold)" << endl;
        cout << "9) Back to Fishing Menu" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice) {
            case 1:
                buyBoat(0, 2000, shrimprate, "Shrimp");
                break;
            case 2:
                buyBoat(1, 20000, crabrate, "Crab");
                break;
            case 3:
                buyBoat(2, 60000, troutrate, "Trout");
                break;
            case 4:
                buyBoat(3, 150000, flounderrate, "Flounder");
                break;
            case 5:
                buyBoat(4, 500000, sharkrate, "Shark");
                break;
            case 6:
                buyBoat(5, 1000000, salmonrate, "Salmon");
                break;
            case 7:
                buyBoat(6, 3000000, shrimprate, "Shrimp");
                break;
            case 8:
                buyBoat(7, 10000000, crabrate, "Crab");
                break;
            case 9:
                fishingMenu();
                break;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    } while (true);
}

void store() {
    int choice;
    do {
        system("cls");
        cout << "Fishing RPG Store" << endl;
        cout << "You currently have " << money << " Gold." << endl;
        cout << "1) Shrimp Net: " << net << " (Costs 100 Gold)" << endl;
        cout << "2) Crab Cage: " << cage << " (Costs 500 Gold)" << endl;
        cout << "3) Harpoon: " << harpoon << " (Costs 1,000 Gold)" << endl;
        cout << "4) Fishing Rod: " << rod << " (Costs 2,000 Gold)" << endl;
        cout << "5) Fly Rod: " << flyrod << " (Costs 5,000 Gold)" << endl;
        cout << "6) Back to Fishing Menu" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice) {
            case 1:
                buyItem(net, 100, "Shrimp Net");
                break;
            case 2:
                buyItem(cage, 500, "Crab Cage");
                break;
            case 3:
                buyItem(harpoon, 1000, "Harpoon");
                break;
            case 4:
                buyItem(rod, 2000, "Fishing Rod");
                break;
            case 5:
                buyItem(flyrod, 5000, "Fly Rod");
                break;
            case 6:
                fishingMenu();
                break;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    } while (true);
}

void buyBoat(int boatIndex, int price, int& rate, const string& fishType) {
    if (money >= price) {
        money -= price;
        boat[boatIndex]++;
        rate++;
        cout << "You bought a " << fishType << " boat! Your catch rate for " << fishType << " has increased." << endl;
        system("pause");
    } else {
        cout << "You don't have enough gold to buy this boat." << endl;
        system("pause");
    }
}

void buyItem(int& item, int price, const string& itemName) {
    if (money >= price) {
        money -= price;
        item++;
        cout << "You bought a " << itemName << "!" << endl;
        system("pause");
    } else {
        cout << "You don't have enough gold to buy this item." << endl;
        system("pause");
    }
}

void checkItems() {
    system("cls");
    cout << "You have the following items:" << endl;
    cout << "Shrimp Net: " << net << endl;
    cout << "Crab Cage: " << cage << endl;
    cout << "Harpoon: " << harpoon << endl;
    cout << "Fishing Rod: " << rod << endl;
    cout << "Fly Rod: " << flyrod << endl;
    cout << "Shrimp Boat: " << boat[0] << endl;
    cout << "Small Boat: " << boat[1] << endl;
    cout << "Large Boat: " << boat[2] << endl;
    cout << "Rich Boat: " << boat[3] << endl;
    cout << "Pro Boat: " << boat[4] << endl;
    cout << "Dream Boat: " << boat[5] << endl;
    cout << "Elegant Boat: " << boat[6] << endl;
    cout << "Titanic: " << boat[7] << endl;
    system("pause");
}

void goFishing() {
    int fishCaught;
    int fishType;
    int fishRate;

    // Randomly determine the type of fish caught
    fishType = rand() % 6 + 1;

    // Determine the catch rate based on the boat and equipment
    if (fishType == 1) {
        fishRate = shrimprate;
        shrimp += fishRate;
        cout << "You caught " << fishRate << " shrimps!" << endl;
    } else if (fishType == 2) {
        fishRate = crabrate;
        crab += fishRate;
        cout << "You caught " << fishRate << " crabs!" << endl;
    } else if (fishType == 3) {
        fishRate = troutrate;
        trout += fishRate;
        cout << "You caught " << fishRate << " trouts!" << endl;
    } else if (fishType == 4) {
        fishRate = flounderrate;
        flounder += fishRate;
        cout << "You caught " << fishRate << " flounders!" << endl;
    } else if (fishType == 5) {
        fishRate = sharkrate;
        shark += fishRate;
        cout << "You caught " << fishRate << " sharks!" << endl;
    } else if (fishType == 6) {
        fishRate = salmonrate;
        salmon += fishRate;
        cout << "You caught " << fishRate << " salmons!" << endl;
    }

    system("pause");
}


//void goFishing() {
//    int fishCaught;
//    int fishType;
//    int fishRate;
//
//    // Determine the type of fish caught
//    fishType = rand() % 6 + 1;
//
//    // Determine the catch rate based on the boat and equipment
//    if (fishType == 1) {
//        fishRate = shrimprate;
//    } else if (fishType == 2) {
//        fishRate = crabrate;
//    } else if (fishType == 3) {
//        fishRate = troutrate;
//    } else if (fishType == 4) {
//        fishRate = flounderrate;
//    } else if (fishType == 5) {
//        fishRate = sharkrate;
//    } else if (fishType == 6) {
//        fishRate = salmonrate;
//    }
//
//    // Catch the fish
//    fishCaught = rand() % 85 + 1;
//
//    // Check if the fish was caught
//    if (fishCaught <= fishRate) {
//        if (fishType == 1) {
//            shrimp++;
//            cout << "You caught a shrimp!" << endl;
//        } else if (fishType == 2) {
//            crab++;
//            cout << "You caught a crab!" << endl;
//        } else if (fishType == 3) {
//            trout++;
//            cout << "You caught a trout!" << endl;
//        } else if (fishType == 4) {
//            flounder++;
//            cout << "You caught a flounder!" << endl;
//        } else if (fishType == 5) {
//            shark++;
//            cout << "You caught a shark!" << endl;
//        } else if (fishType == 6) {
//            salmon++;
//            cout << "You caught a salmon!" << endl;
//        }
//    } else {
//        cout << "You didn't catch anything." << endl;
//    }
//
//    system("pause");
//}
