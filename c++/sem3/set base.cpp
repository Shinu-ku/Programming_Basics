#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,result;
	cout <<"demo of set base"<<endl;
	cout << "enter the value_";
	cin >> n;
	cout<<"THIS SETS THE VALUE TO BINARY FORMAT: "<<setbase(2);
	cout<<n<<endl;
	cout<<"THIS SETS THE VALUE TO OCTAL FORMAT: "<<setbase(8);
	cout<<n<<endl;
	cout<<"THIS SETS THE VALUE TO HEXADECIMAL FORMAT: "<<setbase(16);
	cout<<n<<endl;
	cout<<"THIS SETS THE VALUE TO DECIMAL FORMAT: "<<setbase(10);
	cout<<n<<endl;

//	for(int i = n; i<=1; ) 
//	{
//		result = i/2;
//	}

return 0; 
}
