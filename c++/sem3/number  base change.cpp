// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	char base;
	cout << "Number base converter"<< endl;
	cout << "Enter the number :";
	cin >> n;
	cout<<endl;

	cout << "Enter the base of which u want to convert" << endl;
	cout<<endl;
	cout << "'D' for decimal base 	";
	cout << "'H' for hexadecimal base 	";
	cout << "'O' for octal base 	"<< endl;
	cout<<endl;

	cout << "Enter your input : ";
	cin >> base;
	cout<<endl;

	switch(base) {
		
		case 'D':{
			cout << "decimal base number: "<< setbase(10)<<n<<endl;
			break;
		}
		
		case 'H':{
			cout << "hexadecimal base number: "<< setbase(16)<<n<<endl;
			break;
		}
		
		case 'O':{
			cout << "octal base number: "<< setbase(8)<<n<<endl;
			break;
		}
		
		
	default:{
		cout << "invalid input"<<endl;
		break;
	}
}
 return 0;
}

