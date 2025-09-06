// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
// MultiLevel Inheritance
using namespace std;
class universityDEI {
public:
		universityDEI()
		{
			cout<<"I am in universityDEI Class"<<endl;
			}	
};
class TechnicalCollege: public universityDEI{
public:
		TechnicalCollege()
		{
			cout<<"I am in TechnicalCollege Class"<<endl;
		}	
};

class diplomaIT:public TechnicalCollege{
public:
		diplomaIT()
		{
			cout<<"I am in diplomaIT Class"<<endl;
		}	
};


int main()
{

	diplomaIT it1;

 return 0;
}

