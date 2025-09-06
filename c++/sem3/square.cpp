// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>

using namespace std;


int main(){
	cout << "Enter the number of sides"<<endl;
	int n;
	cin>>n;
	cout << endl;
	for(int i = n/2; i<=n; i++){
		for(int j = 0; j<=n; j++){
			cout<<"*";
		}
		cout<<endl;
	}


 return 0;
}

