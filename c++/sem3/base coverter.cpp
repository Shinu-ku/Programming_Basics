// Name: Soumya Kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <iomanip>
#include <bitset>  // For binary conversion
using namespace std;

int main() {
    int n;
    char base;
    
    cout << "Number Base Converter" << endl;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter the base to which you want to convert:" << endl;
    cout << "'D' for decimal base" << endl;
    cout << "'H' for hexadecimal base" << endl;
    cout << "'O' for octal base" << endl;
    cout << "'B' for binary base" << endl;  // Added binary base option
    cout << "Enter your input: ";
    cin >> base;
    
    // Convert input to uppercase to handle both lowercase and uppercase inputs
    base = toupper(base);

    switch (base) {
        case 'D':
            cout << "Decimal base number: " << dec << n << endl;
            break;
        case 'H':
            cout << "Hexadecimal base number: " << hex << n << endl;
            break;
        case 'O':
            cout << "Octal base number: " << oct << n << endl;
            break;
        case 'B':
            // Using std::bitset to convert to binary
            cout << "Binary base number: " << bitset<32>(n) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
