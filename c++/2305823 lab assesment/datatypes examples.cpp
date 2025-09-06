#include <iostream>

using namespace std;
int main()
{
	int a;
	float b;
	double c;
	char d;
	bool e;
	string name;
	
	
	//integer
	cout<<"Enter the INT no:"<<endl;
	cin>>a;
	cout<<"the integer value:"<<a<<endl<<endl;
	cout<<"the size of int:"<<sizeof(a)<<endl<<endl;
	
	//float
	cout<<"Enter the FLOAT no:"<<endl;
	cin>>b;
	cout<<"the float value:"<<b<<endl<<endl;
	cout<<"the size of float:"<<sizeof(b)<<endl<<endl;
	
	//double
	cout<<"Enter the DOUBLE no:"<<endl;
	cin>>c;
	cout<<"the double value:"<<c<<endl<<endl;
	cout<<"the size of double:"<<sizeof(c)<<endl<<endl;
	
	//float
	cout<<"Enter the CHARACTER:"<<endl;
	cin>>d;
	cout<<"the char value:"<<d<<endl<<endl;
	cout<<"the size of char:"<<sizeof(d)<<endl<<endl;
	
	//bool
	cout<<"Enter true or false:"<<endl;
	cin>>e;
	cout<<"the bool value:"<<e<<endl<<endl;
	cout<<"the size of bool:"<<sizeof(e)<<endl<<endl;
	
	//string
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"the name:"<<name<<endl<<endl;
	cout<<"the size of string:"<<sizeof(name)<<endl<<endl;
		
	return 0;
}

