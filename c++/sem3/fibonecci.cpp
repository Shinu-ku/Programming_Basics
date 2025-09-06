// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <string.h>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    const string con = "yes";
    string ans;

    cout << "Do you want to input the initial terms as '0 and 1' of the Fibonacci series?" << endl;
    cout << "(yes/no): ";
    cin >> ans;

    if (strcmp(con.c_str(), ans.c_str()) != 0) {
        cout << "Enter the first term: ";
        cin >> a;
        cout << "Enter the second term: ";
        cin >> b;
    }

    cout << "Fibonacci series up to " << n << " terms: ";
    for (i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int terms;

    // Input the number of terms
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> terms;
    fibonacci(terms);
    return 0;
}

