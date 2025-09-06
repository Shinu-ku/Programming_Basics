#include <iostream>
using namespace std;

int main(){
	cout<<"Exeption handling demo: "<< endl;
	int a;
	cout << "Enter any natural no. : ";
	cin>>a;
	
    try{
        if(a==0)
        {
            throw "'0' is not natural number";  
        }
        else
        {
        cout<<a<<" is a natural number"<<endl;
		
        }   
    }
    catch(const char* err)
    {
        cerr<<"Exception Occurred: "<<err<<endl;
    }
    
    return 0;
}
