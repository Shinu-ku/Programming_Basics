#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n;
	cout <<"demo of set precision"<<endl;
	cout << "enter the value_";
	cin >> n;
	
	cout<<"THIS SETS THE SIZE TO 2 VALUES: "<<setprecision(2);
	cout<<n<<endl;
	cout<<"THIS SETS THE SIZE TO 8 VALUES: "<<setprecision(8);
	cout<<n<<endl;
	cout<<"THIS SETS THE SIZE TO 21 VALUES: "<<setprecision(21);
	cout<<n<<endl;
	cout<<"THIS SETS THEV SIZE TO 10 VALUES: "<<setprecision(10);
	cout<<n<<endl;
	
return 0; 
}
