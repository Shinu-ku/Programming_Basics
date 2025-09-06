#include <iostream>

using namespace std;

int main(){
	
	int n = 10;
	int *ptr = &n;
	
	cout<<endl;	
	cout<<"<= pointer demo =>" <<n<<endl;
	cout<<endl;
	cout<<"the value of n: " <<n<<endl;
	cout<<"the adderess of n: " <<&n<<endl;
	cout<<"the value of pointer value: " <<ptr<<endl;
	cout<<"the adderess of pointer value: " <<&ptr<<endl;
	cout<<endl;
	cout<<"pointer airthematic"<<endl;
	cout<<endl;
	cout<<"the value of pointer value + 1: " <<ptr+1<<endl;
	cout<<"the value of pointer value - 1: " <<ptr-1<<endl;
	
	
	
	
	return 0;
}
