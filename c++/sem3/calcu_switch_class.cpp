// Name: Soumya Kushwah  Roll No: 2305823  Branch: VOC IT
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Calculator {
public:
    double result, x, y;

    double add(double x, double y);
    double sub(double x, double y);
    double mul(double x, double y);
    double div(double x, double y);
};

double Calculator::add(double x, double y) {
    result = x + y;
    return result;
}

double Calculator::sub(double x, double y) {
    result = x - y;
    return result;
}

double Calculator::mul(double x, double y) {
    result = x * y;
    return result;
}

double Calculator::div(double x, double y) {
    if (y != 0) {
        result = x / y;
        return result;
    } else {
        cout << "Error: Division by zero is not defined." << endl;
        return 0;
    }
}

int main() {
    string operation;
    Calculator cal;
    double res;

    cout << "Calculator using Class" << endl;
    cout << "Enter the values you want to calculate: " << endl;
    
    cout << "Enter the value of the 1st number: ";
    cin >> cal.x;
    cout << "Enter the value of the 2nd number: ";
    
	cin >> cal.y;
	cout<<endl;

    // Asking user for the operation
    cout << "Which operation do you want to perform?" << endl;
    
    cout << "Type 'add' for Addition 'sub' for Subtraction" << endl;
    cout << "Type 'mul' for Multiplication 'div' for Division" << endl;
    
    cout << "your input:  ";
    cin >> operation;

    // Performing the calculation based on user input
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

