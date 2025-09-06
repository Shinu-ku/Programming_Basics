// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
	cout<<"Exception Handling Demo: standard Exception "<<endl;
	try{
		
		throw runtime_error("Runtime Type Ka Exception Hai");
	}
	catch(runtime_error& refExcept)
	{
		cerr<<"Exception Type: "<<refExcept.what()<<endl;
	}
	
	
 return 0;
}

