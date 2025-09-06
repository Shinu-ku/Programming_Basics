// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
//Inline function
using namespace std;
	inline	double AreaofCircle(double r);
	inline	double AreaofCircle(double r){
		return 3.14*r*r;
		
	}

int main()
{
	cout<<"program start"<<endl;
	int r;
	double AREA= AreaofCircle(r);
	cout<<"Enter the Value of r "<<AREA<<endl;
	cin>>r;
	
	cout<<"Area of Circle is "<<endl;
	
	cout<<"program end"<<endl;

 return 0;
}

