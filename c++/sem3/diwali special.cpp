// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;

int main() {
	
    cout << "Enter the size of the mombatti in numbers: ";
    int n = 12;
    cin >> n;
    
    string spc = "";
    for(int j = n / 2; j <= n; j++) {
        spc += " ";
    }
    
    cout << spc << "\n\n<= HAPPY DIWALI =>\n\n" << endl;
    cout << spc << " *   " << endl;
    cout << spc << " **   " << endl;
    cout << spc << "***   " << endl;
    cout << spc << " **   " << endl;

    for(int i = 0; i <= n; i++) {
        for(int j = 5; j <= n; j++) {
            cout << " *";
        }
        cout << endl;
    }
}

