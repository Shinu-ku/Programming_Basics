#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    int numofbooks;
    float* bookprices = NULL;
    float tprice;

    Student() : numofbooks(0), bookprices(NULL), tprice(0) {}

    ~Student() {
        if (bookprices != NULL) {
            delete[] bookprices;
        }
    }
};

void inputStdata(Student& student) {
    cout << "Enter your name: ";
    cin >> student.name;

    cout << "Enter the number of books issued: ";
    cin >> student.numofbooks;

    if (student.numofbooks > 0) {
        student.bookprices = new float[student.numofbooks];
    }

    for (int i = 0; i < student.numofbooks; i++) {
        cout << "Enter the price of book " << i + 1 << ": ";
        cin >> student.bookprices[i];
        student.tprice += student.bookprices[i];
    }
}

void displaystdata(const Student& student) {
    cout << "The name of student: " << student.name << endl;
    cout << "The number of books issued: " << student.numofbooks << endl;
    cout << "Prices of issued books: ";
    for (int i = 0; i < student.numofbooks; i++) {
        cout << student.bookprices[i] << ", ";
    }
    cout << "\nThe final amount for books: " << student.tprice << endl;
    cout << endl;
}

// Function to save student data to a file
void saveToFile(const Student& student, ofstream& file) {
    file << "Name: " << student.name << endl;
    file << "Number of books issued: " << student.numofbooks << endl;
    file << "Prices of issued books: ";
    for (int i = 0; i < student.numofbooks; i++) {
        file << student.bookprices[i] << ", ";
    }
    file << "\nTotal amount for books: " << student.tprice << endl;
    file << "----------------------------------------" << endl;
}

int main() {
    int numStudents;
    cout << "Student Library System" << endl;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << endl;

    // Open the file in append mode so new data is added to the end
    ofstream file("library_data.txt", ios::app);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Student* students = new Student[numStudents];
    
    for (int i = 0; i < numStudents; i++) {
        cout << "\n--- Enter details for Student " << i + 1 << " ---" << endl;
        inputStdata(students[i]);
        saveToFile(students[i], file);  // Save each student's data to the file
    }
    
    cout << "\n--- Displaying Student Data ---" << endl;
    for (int i = 0; i < numStudents; i++) {
        displaystdata(students[i]);
    }

    delete[] students;
    file.close();  // Close the file when done
    return 0;
}

