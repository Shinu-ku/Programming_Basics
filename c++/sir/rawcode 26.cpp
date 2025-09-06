// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
class Rectangle{
	public:
		double length;
		double breadth;	
		
		public:
		void message();
};

void Rectangle::message(){
			std::cout<<"You are using Class and object"<<std::endl;
		}
		
using namespace std;
int main()
{

Rectangle rect1;

rect1.length=7.8;
rect1.breadth=5.9;

cout<<"Area of Rectangle 1 is "<<rect1.length*rect1.breadth<<endl;
rect1.message();

 return 0;
}

