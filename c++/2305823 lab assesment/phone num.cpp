#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream phnum("phone.txt",ios::in);
	long long int num, num1;
	cout<< " enter you're phone number :";
	cin >>num;
	cout<< " re-enter the number: ";
	cin>>num1;
	

	
	try{
	if(num!=num1){
		throw "theek se likha bhi nhi jata ";
		}else{
			cout<< "'good' teri aanhke achchi hai "<<endl;
			cout<< "bewkoof! tera phone number maar liya"<<endl;
			phnum << "This is " <<num<<endl;
		}
	}
	catch(const char* err){
		cerr <<"error occured: "<<err<<endl;
	}
	
return 0;
}

