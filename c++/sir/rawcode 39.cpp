// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
//function overloading
using namespace std;
int add(int x, int y);  //function declaration
int add(int x, int y)  //function definition
{
	
	return x+y ;
}

int add( double x, double y)  //function definition
{
	
	return x+y ;
}

int main()
{
	cout<<"program start"<<endl;
	double v1,v2;
	cout<<"Enter the values"<<endl;
	cin>>v1>>v2;
	double result;
	result=add(v1,v2);  //function calling
	cout<<"sum values is "<<result<<endl;
	cout<<"Enter the values"<<endl;
	cin>>v1>>v2;
	result=add(v1,v2);  //function calling
	cout<<"sum values is "<<result<<endl;
	cout<<"program end"<<endl;

 return 0;
}

