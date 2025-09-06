// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	cout<<"The multiplication table creater"<<endl;
	int a,i;
	cout<<"Enter the number:";
	cin>>a;
	cout<<endl;
	cout<<"The multiplication table of ("<<a<<") is"<<endl;

	
	for (i = 1; i <= 10; i++) {
        cout<<a<<"*"<<i<<"="<<(a*i)<<endl;
    }

 return 0;
}

