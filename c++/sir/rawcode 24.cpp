// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;

class Laptop{
	
	public:
	int RAM=16;
	float processor=3.22;	
};

int main()
{
	cout<<"Program Start"<<endl;
	Laptop lap;  //Object created
	
	cout<<"RAM is "<<lap.RAM<<" GB"<<endl;
	cout<<"Processor is "<<lap.processor<<" GHz"<<endl;	
	cout<<"Program End"<<endl;
 return 0;
}

