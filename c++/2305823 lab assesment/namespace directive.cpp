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
	cout<<"calculator using namespace directive"<<endl;
		
	using namespace calculator; 
	add(156,498);
	sub(1515,156);
	mul(156,2);
	div(466,146);
	
}
