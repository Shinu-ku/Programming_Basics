#include <iostream>
using namespace std;

namespace calculator{
	float result,a,b;
	string operation;
	
		float add(float a, float b){
			result = a + b;
			cout <<"THE SUM IS : "<<result<<endl;
			return 0;
		}
		float sub(float a, float b){
			result = a - b;
			cout <<"THE SUBTRACTION  IS : "<<result<<endl;
			return 0;
		}
		float mul(float a, float b){
			result = a * b;
			cout <<"THE MULTIPLICATION IS : "<<result<<endl;
			return 0;
		}
		float div(float a, float b){
			result = a / b;
			cout <<"THE DIVISION IS : "<<result<<endl;
			return 0;
		}
};

int main(){
	cout<<"calculator using namespace scope resolution"<<endl;
	
	
	
	calculator::add(12,34);
	calculator::sub(45,26);
	calculator::mul(2,34);
	calculator::div(892,15);
}
