// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>

using namespace std;

class  OS {
	public:
		int architecture;
		
		OS(int arch){
			architecture = arch;
			cout<< "OS Architecture is "<<architecture<<"-bit"<<endl;
		}
		
};

class Windows : public OS{
	public:
		int edition;
		Windows(int arch, int ed1):OS(arch){
			edition = ed1;
			cout << "Windows edition is " <<edition<<" pro"<< endl;
		}
};

int main(){
	Windows windowsver(64,11);

 return 0;
}

