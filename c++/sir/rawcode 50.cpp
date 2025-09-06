// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>

using namespace std;
int main(){
	cout<<"Exception Handling Demo: "<<endl;
	int n,d,result;
	cout<<"Enter the value of n and d: ";
	cin>>n>>d;
	try{
		if(d==0)
		{
			throw "Divided by Zero Exception";	
		}
		else
		{
		result=n/d;	
		cout<<"Result of division is "<<result;
		}	
	}
	catch(const char* errmsg)
	{
		cerr<<"Exception Occurred: "<<errmsg<<endl;
	}
 return 0;
}

