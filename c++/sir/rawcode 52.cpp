// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <exception>
using namespace std;
class customException: public exception{
	public:
		const char* what() const throw()
		{
			return "Custom Exception Occurred";
		}
	
};

int main(){
	cout<<"Exception Handling Demo: User Defined Exception "<<endl;
	
	try{
		
		throw customException();
	}
	catch(customException& refExp)
	{
		cerr<<"Exception Type: "<<refExp.what()<<endl;	
	}
 return 0;
}

