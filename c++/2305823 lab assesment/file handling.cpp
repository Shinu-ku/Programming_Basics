#include <iostream>
#include<fstream>
using namespace std;

int main(){
string Read;
ifstream StudentData("vit.txt",ios::in);

while(getline(StudentData,Read))
{
cout<<Read;
}
StudentData.close();
cout<<"\nProgram End"<<endl;
 return 0;
}

