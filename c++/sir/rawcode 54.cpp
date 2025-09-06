// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main(){
	int num;
	int* temp;	//Pointer Type Variable
	num=200;
	temp=&num;
	cout<<"Value of num is "<<num<<endl;
	cout<<"Address of num is "<<&num<<endl;
	
	cout<<"After modification"<<endl;
	cout<<"Value of temp is "<<temp<<endl;
	cout<<"Address of temp is "<<&temp<<endl;
	cout<<"Value at num is "<<*temp<<endl;
 return 0;
}

