#include <iostream>
using namespace std;

int main()
{
	cout<<"check whether the year is leap year or not"<<endl;
	int year;
	cout<<"Enter the year";
	cin>>year;
	
	if((year / 4 == 0) && (year % 100 != 0) || (year % 400 == 0) )
	{
		cout<<"The year is leap year"<<endl;
		}else{
			cout<<"The year is not year"<<endl;
		}	
}
