// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
//Multiple Inheritance

using namespace std;
class Projector {
public:
		Projector()
		{
			cout<<"I am in Projector Class"<<endl;
			}	
};
class ledLight{
public:
		ledLight()
		{
			cout<<"I am in ledLight Class"<<endl;
		}	
};
class Fan{
public:
		Fan()
		{
			cout<<"I am in Fan Class"<<endl;
		}	
};

class Power:public Projector,public ledLight, public Fan{
public:
		Power()
		{
			cout<<"I am in Power Class"<<endl;
		}	
};


int main()
{

	Power powerObject;

 return 0;
}

