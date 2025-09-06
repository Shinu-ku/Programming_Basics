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
	cout<<"calculator using namespace declarative"<<endl;
	
	using calculator::add;
	add(546,515);	
	using calculator::sub;
	sub(465,122);
	using calculator::mul;
	mul(52,5);
	using calculator::div;
	div(53,23);
}
