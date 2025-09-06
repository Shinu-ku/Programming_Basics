// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	cout<<"To find the greatest number"<<endl;

	int a1,a2,a3;
	// input three integer
	cout<<"Enter the first integer: ";
	cin>>a1;
	cout<<"Enter the second integer: ";
	cin>>a2;
	cout<<"Enter the third integer: ";
	cin>>a3;
	cout<<endl;

// finding the greatest integer
	if(( a1 > a2 ) && (a1 > a3))
	{
		cout<<a1<<" is greatest integer"<<endl;
		
	}else if((a2 > a1) && (a2 > a3))
	{
		cout<<a2<<" is greatest integer"<<endl;
	}else if ((a3 > a1) && (a3 > a2))
	{
		cout<<a3<<" is greatest integer"<<endl;
	}
	
	// if all integers are equal 
	if ( (a1 == a2 ) && ( a2 == a3)){
		cout<<"ALL INTEGERS ARE EQUAL"<<endl;
		cout<<a1<<" = "<<a2<<" = "<<a3<<endl;
	}
 return 0;
}

