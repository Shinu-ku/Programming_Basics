// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
class Parent {
public:
		Parent()
		{
			cout<<"I am in Parent Class"<<endl;
			}	
};
class Child: public Parent{
public:
		Child()
		{
			cout<<"I am in Child Class"<<endl;
			}
		Parent::Parent()
		{
			cout<<"I am in Parent Class Again"<<endl;
			}	
};

int main()
{

	Child c1;

 return 0;
}

