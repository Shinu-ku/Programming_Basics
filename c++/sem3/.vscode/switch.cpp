#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
	// declaring variables
    float a, b, result;
    char operation;
    
    // input the variables
    cout << "CALCULATOR FOR TWO VARIABLES" << endl << endl;
    cout << "Enter the values of which you want to calculate: "<<endl;
    cout << "Enter the value of 1st integer: ";
    cin >> a;
    cout << "Enter the value of 2nd integer: ";
    cin >> b;

	// declaring operation
    cout << "Which operation you want to do" << endl;
    cout << endl;
    cout << "__type...____" <<endl;
    cout << endl;
    
    // input operations
    cout << " '+'   for addition"  << " 			'-'    for subtraction" << endl;
    cout << " '*'   for multiplication" <<  " 		'/'    for division" << endl;
    cout << endl;
    
    cout << "Operation:- "; 
    cin >> operation;
    cout<<endl;

	switch(operation) 
	{
		case '+' :{
		result = a + b;
        cout << "-----------------------------------------------------" << endl;
        cout << "Addition of these variables is: "<<setprecision(25) << result << endl;
        cout << "-----------------------------------------------------" << endl;	
			break;
		}
		
		case '-' :{
		result = a - b;
        cout << "-----------------------------------------------------" << endl;
        cout << "Subtraction of these variables is: "<<setprecision(25) << result << endl;
        cout << "-----------------------------------------------------" << endl;
			break;
		}
			
		case '*' :{
		result = a * b;
        cout << "-----------------------------------------------------" << endl;
        cout << "Multiplication of these variables is: "<<setprecision(25) << result << endl;
        cout << "-----------------------------------------------------" << endl;
			break;
		}
			
		case '/' :{
		  if (b != 0){
            result = a / b;
            cout << "-----------------------------------------------------" << endl;
            cout << "Division of these variables is: "<<setprecision(25) << result << endl;
            cout << "-----------------------------------------------------" << endl;
        } else{
			cout << "-----------------------------------------------------" << endl;
            cout << "Error: Division by zero is not defined." << endl;
            cout << "-----------------------------------------------------" << endl;
        }
			break;
		}
		
		default:{
		cout << "-----------------------------------------------------" << endl;
        cout << "Invalid operation." << endl;
        cout << "-----------------------------------------------------" << endl;
			break;
		}
	}
 return 0;
}
