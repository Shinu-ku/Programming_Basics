#include <iostream>
#include "nsCalculator.h" 
using namespace std;

int main() {
    char operation;
    cout << "Calculator using namespace" << endl;
    cout << endl;

    cout << "Input the operation" << endl;
    cout << "'a' for add        's' for sub" << endl;
    cout << "'m' for mul        'd' for div" << endl;
    cout << "you're input: ";
    cin >> operation;

    try {
        if ((operation != 'a') && (operation != 's') && (operation != 'm') && (operation != 'd')) {
            throw "input error"; 
        }

        cout << "Input the value of 1st float: ";
        cin >> calculator::a; // Assuming a is declared in the calculator namespace
        cout << "Input the value of 2nd float: ";
        cin >> calculator::b; // Assuming b is declared in the calculator namespace
        cout << endl;

        switch (operation) {
            case 'a':
                calculator::add(calculator::a, calculator::b); // Perform addition
                break;
            case 's':
                calculator::sub(calculator::a, calculator::b); // Perform subtraction
                break;
            case 'm':
                calculator::mul(calculator::a, calculator::b); // Perform multiplication
                break;
            case 'd':
                if (calculator::b == 0) {
                    throw "Division by zero error"; // Handle division by zero
                }
                calculator::div(calculator::a, calculator::b); // Perform division
                break;
            default:
                cout << "Syntax error" << endl;
        }
    }
    catch (const char* err) {
        cerr << "aukat ke bahar ka: " << err << endl; // Handle the errors
    }

    return 0;
}

