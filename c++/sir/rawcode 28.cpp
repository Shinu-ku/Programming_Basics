// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
class Car{
	public:
		int speed;
		double power;
	
	//Constructor is initialize
	Car()
	{
		std::cout<<"\nConstructor is Initialized"<<std::endl;
	}
	~Car()
	{
		std::cout<<"\nDistructor is Initialized"<<std::endl;
	}
};
using namespace std;
int main()
{
cout<<"Demo of Constructor and Distructor"<<endl;
Car bmw;   //object of class Car


 return 0;
}

