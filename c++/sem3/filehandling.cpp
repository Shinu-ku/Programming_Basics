// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <fstream> // For file handling
using namespace std;

int main() {
    // Writing to a file
    ofstream outputFile("example.txt");
    if (!outputFile) {
        cout << "Error: Cannot open the file for writing!" << endl;
        return 1;
    }

    outputFile << "Hello, World!" << endl;
    outputFile << "This is a simple file handling program." << endl;
    outputFile.close(); // Close the file

    // Reading from the file
    ifstream inputFile("example.txt");
    if (!inputFile) {
        cout << "Error: Cannot open the file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file:" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl; // Print each line
    }

    inputFile.close(); // Close the file

    return 0;
}


