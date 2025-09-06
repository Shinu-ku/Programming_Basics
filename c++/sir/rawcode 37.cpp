#include<iostream>
using namespace std;
class Parent{
	public:
		Parent()
		{
			cout<<"Constructor of Parent Class"<<endl;
		}
		Parent(int HoldValue)
		{
			cout<<"Parent Default Value is "<<HoldValue<<endl;
		}
		void FunOverriding()
		{
			Parent(100);
			cout<<"I am a function Parent Class"<<endl;
		}
	
};
class Child:public Parent{
	public:
		Child()
		{
			Parent(10);
			cout<<"Constructor of Child Class"<<endl;
		}
		void FunOverriding()
		{
			Parent(1);
			cout<<"I am a function of Child Class"<<endl;
		}	
};

int main()
{
	Child childObject;
	childObject.FunOverriding();
	childObject.Parent::FunOverriding();
	return 0;
}
