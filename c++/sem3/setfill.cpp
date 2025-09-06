#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string var;
	cout << "enter your name";
	cin>> var;
	cout<<setfill('0')<<setw(20);
	cout<<var<<endl;

return 0; 
}
