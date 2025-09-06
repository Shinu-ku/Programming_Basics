// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	//Swapping using 2 variable method
	int a,b;
	
	cout<<"Enter the value of a and b: "<<endl;
	cin>>a>>b;
	cout<<"Before Swapping:\n"<<"Value of a is "<<a<<"\tValue of b is "<<b<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"After Swapping:\n"<<"Value of a is "<<a<<"\tValue of b is "<<b<<endl;

 return 0;
}

