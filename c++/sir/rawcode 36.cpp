// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
// Hierarchical Inheritance
using namespace std;
class Branch {
public:
		Branch()
		{
			cout<<"I am in Branch Class"<<endl;
		}	
};
class Electrical: public Branch {
public:
		Electrical()
		{
			cout<<"I am in Electrical Class"<<endl;
		}	
};
class Electronics:public Branch {
public:
		Electronics()
		{
			cout<<"I am in Electronics Class"<<endl;
		}	
};
class InformationTechnology: public Branch {
public:
		InformationTechnology()
		{
			cout<<"I am in InformationTechnology Class"<<endl;
		}	
};

int main()
{
	InformationTechnology it1;
	Electrical ee1;
	Electronics el1;

 return 0;
}

