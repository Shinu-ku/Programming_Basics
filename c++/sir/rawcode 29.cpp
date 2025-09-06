// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
class Rectangle{
	public:
		int length;
		int breadth;
		
	//Constructor is initialize
	Rectangle(int v1, int v2)
	{
		std::cout<<"\nConstructor is Initialized"<<std::endl;
		length=v1;
		breadth=v2;
	}
	~Rectangle()
	{
		std::cout<<"\nDestructor is Initialized"<<std::endl;
	}
};
using namespace std;
int main()
{
cout<<"Demo of Parameterized Constructor"<<endl;

Rectangle s1(25,30);   //object of class Square

cout<<"Area of Rectangle is " <<s1.length*s1.breadth;
 return 0;
}

