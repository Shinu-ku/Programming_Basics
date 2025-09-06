// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
class Mobile{
	private:
		double price;	
	public:
		double storage;
		double applePrice(double reportPrice)
		{
			price=reportPrice;
		}
		double PoliceReturn()
		{
			return price;
		}	
};

using namespace std;
int main()
{
	Mobile apple;
	apple.storage=128;
	cout<<"Apple storage is "<<apple.storage<<" GB"<<endl;
	apple.applePrice(2000.0);
	cout<<"Apple price is "<<apple.PoliceReturn()<<" Rupee"<<endl;
 return 0;
}

