#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Relational operator"<<endl;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"the value of a:"<<a<<". the value of b:"<<b<<endl<<endl;
	
	cout<<"a is greater than b:"<<(a<b)<<endl;
	cout<<"a is smaller than b:"<<(a>b)<<endl;
	cout<<"a is greater than equals to b:"<<(a<=b)<<endl;
	cout<<"a is lower than equals to b:"<<(a>=b)<<endl;
	cout<<"a is not equal to b:"<<(a!=b)<<endl;
	cout<<"a is comparision to b:"<<(a==b)<<endl;
	
	return 0;
}
