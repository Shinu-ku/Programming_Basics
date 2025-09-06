// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	int n,i,result = 0;
	cout<<"Enter the no. of term :";
	cin>>n;

	for (i = 1; i <= n; i++)
	{
	cout<<i<<" + ";
	result += i ;
	}
	cout<<endl;
	cout<< "sum of natural no. is : "<< result <<endl;
	
 return 0;
}

