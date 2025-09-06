// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;
namespace Technical{	
	int attempt=1;
	void greeting()
	{
		cout<<"Welcome to Technical College"<<endl;
	}
	
			namespace Science{
				int attempt=2;
					void greeting()
						{
						cout<<"Welcome to Science Faculty"<<endl;
						}
			}
}

using namespace Technical;
using namespace Technical::Science;

int main(){
	Technical::greeting();
	cout<<"This is your "<<Technical::attempt<<" attempt"<<endl;
	Science::greeting();
	cout<<"This is your "<<Science::attempt<<" attempt"<<endl;
 return 0;
}

