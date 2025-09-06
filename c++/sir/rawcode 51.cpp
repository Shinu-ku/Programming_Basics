// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>

using namespace std;
int main(){
	cout<<"Exception Handling Demo: With multiple catch blocks "<<endl;
try{
	// throw "Divided by Zero Exception";
	throw 5.5;	
	}
	catch (int errcode)
	{
		cerr<<"Exception Occurred: "<<errcode<<endl;
	}
	catch(const char* errmsg)
	{
		cerr<<"Exception Occurred: "<<errmsg<<endl;
	}
	catch(...)
	{
		cerr<<"Exception Occurred: Unknown type of error"<<endl;
	}
 return 0;
}

