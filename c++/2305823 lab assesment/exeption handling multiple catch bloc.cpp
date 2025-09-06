#include <iostream>

using namespace std;

int main(){
	cout<<"Exeption handling multiple catch block demo: "<< endl;
	int a;
	cout << "Enter any natural no. : ";
	cin>>a;
	
    try{
        if(a==0)
        {
            throw "'0' is not natural number"; 
			throw 404.0889; 
			throw 404; 
        }
        else
        {
        cout<<a<<" is a natural number"<<endl;
		
        }   
    }
    catch(int errcode)
    {
        cerr<<"Exception Occurred: "<<errcode<<"error not found"<<endl;
    }
    catch(const char* errmsg)
    {
        cerr<<"Exception Occurred: "<<errmsg<<endl;
    }
    catch(...)
    {
        cerr<<"Exception Occurred: TYPE UNKNOW"<<endl;
    }
    
    return 0;
}
