// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
 
 int n1,n2,n3;
 
 cout<<"Program Start"<<endl;
 cout<<"Enter the value of n1, n2, and n3"<<endl;
 cin>>n1>>n2>>n3;
 if((n1>n2)&&(n1>n3))
 {
 	cout<<"n1 is greatest "<<n1<<endl;
 }
 else if((n2>n1)&&(n2>n3))
 {
 	cout<<"n2 is greatest "<<n2<<endl;
 }
 else if((n3>n1)&&(n3>n2))
 {
 	cout<<"n3 is greatest "<<n3<<endl;
 }
 else
 {
 	cout<<"All values or any two values may be equal"<<endl;
 }
cout<<"Program Stop"<<endl;
 return 0;
}

