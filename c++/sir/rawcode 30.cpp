// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
class Square{
	public:
		int side;
		
	//Constructor is initialize
	Square(int holdVal)
	{
		std::cout<<"\nConstructor is Initialized-1"<<std::endl;
	side=holdVal;
	}
		Square(Square &s2Hold)
	{
		std::cout<<"\nConstructor is Initialized-2"<<std::endl;
	side=s1Hold.side;
	}
	~Square()
	{
		std::cout<<"\nDestructor is Initialized"<<std::endl;
	}
};
using namespace std;
int main()
{
cout<<"Demo of Copy Constructor"<<endl;

Square s1(45);   //object of class Square
Square s2(55);
Square s3(s2);
cout<<"Area of Square is "<<s1.side*s1.side;
 return 0;
}

