// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	cout<<"To swap the values"<<endl;
	int a , b;
	
	cout<<"Enter the values a and b:";
	cin>>a>>b;
	cout<<endl;

	cout<<"the values before swaping: a = "<<a<<" b = "<<b<<endl;
	a = a+b;
	b = a-b;
	a = a-b;

	cout<<"the values after swaping: a = "<<a<<" b = "<<b<<endl;

 return 0;
}

