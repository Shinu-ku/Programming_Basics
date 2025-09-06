// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	char choice;
	float value1,value2;
	cout<<"----- Basic Calculator--------"<<endl;
	cout<<endl;

	cout<<"Enter your choice : \n  + : Addition  \n  - : Subtraction \n  / : Division   \n  * : Multiplication"<<endl;
	cout<<"your input__";
	
	cin>>choice;
	cout<<"Enter the value1: ";
	cin>>value1;
	cout<<"Enter the value2: ";
	cin>>value2;
	
	switch(choice)
{
	
	    case '+': cout<<"Sum of value1 and value 2 is "<<(value1+value2)<<endl;
			break;
	
		case '-': cout<<"Subtraction of value1 and value 2 is "<<(value1-value2)<<endl;
			break;
		case '/': cout<<"Division of value1 and value 2 is "<<(value1/value2)<<endl;
			break;
			
		case '*': cout<<"Product of value1 and value 2 is "<<(value1*value2)<<endl;
			break;			
	default:
			cout<<"Entering wrong input value"<<endl;
			//statement
			break;
}


 return 0;
}

