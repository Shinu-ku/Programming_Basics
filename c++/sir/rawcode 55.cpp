// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	//Pointer's Arithmetic
	int num;
	int* temp;	//Pointer Type Variable
	num=200;
	temp=&num;
	
	cout<<"Value of address is "<<setbase(10)<<&temp<<endl;
	cout<<"Value of address + 2 is "<<&temp+2<<endl;
	cout<<"Value of address - 3 is "<<&temp-3<<endl;
 return 0;
}

