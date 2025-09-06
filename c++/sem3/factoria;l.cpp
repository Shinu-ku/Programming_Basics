// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
int main()
{
	cout<<"Factorial of positive integer value"<<endl;
	int n;
    int factorial = 1;
    cout<<"Enter any positive integer:";
    cin>>n;
    cout<<endl;
    
    if(n<0)
    {
    	cout<<"Factorials are not defined for negative integer";
	}else
	{
		for(int i=1; i<=n; ++i) 
		{
			factorial *= i;
		}
		cout<<"The Factorial of given int("<<n<<") is: "<<factorial;

	}
    


 return 0;
}

