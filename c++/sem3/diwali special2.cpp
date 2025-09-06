// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <cstdlib>  // For system("CLS")
#include <windows.h> // For Sleep() on Windows
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the mombatti in numbers: ";
    cin >> n;

    while (true) {
        // Clear the screen
        system("CLS"); // For Windows, use "CLS" to clear the console screen

        // Randomize flame position for flickering effect
        int flameShift = rand() % 3 - 1; // Random shift between -1, 0, and 1

        cout << "\n\n<= HAPPY DIWALI =>\n\n" << endl;

        // Flame part (dynamically flickering)
        for (int i = 0; i < 3; i++) {
            // Adjust spaces based on current flame row and random shift
            for (int j = 0; j < n / 2 - i + flameShift; j++) {
                cout << " ";
            }
            // Print stars for flame
            for (int k = 0; k <= i; k++) {
                cout << "@";
            }
            cout << endl;
        }
        // Symmetry for the lower flame part
        for (int i = 1; i >= 0; i--) {
            for (int j = 0; j < n / 2 - i + flameShift; j++) {
                cout << " ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "@";
            }
            cout << endl;
        }

        // Candle body part
  	  for(int i = 0; i <= n; i++) {
    	    for(int j = 5; j <= n; j++) {
      	      cout << " @";
        	}
       	cout << endl;
  		}

        // Sleep for a short duration to slow down the flickering effect
        Sleep(500); // Pause for 500 milliseconds (half a second)
    }

    return 0;
}

