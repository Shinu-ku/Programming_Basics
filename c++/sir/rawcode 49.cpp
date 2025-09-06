// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include<fstream>
using namespace std;

int main(){
string ReadTextfromFile;
cout<<"Program Start"<<endl;
ifstream StudentData("vitData1.txt",ios::in);

while(getline(StudentData,ReadTextfromFile))
{
cout<<ReadTextfromFile;
}
StudentData.close();
cout<<"\nProgram End"<<endl;
 return 0;
}

