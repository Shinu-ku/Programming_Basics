// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include<fstream>
using namespace std;

int main(){
ofstream StData("vitData1.txt",ios::app);
cout<<"the file is created"<<endl;
StData<<"This is second line for Hello!"<<endl;
StData.close();
cout<<"Program End"<<endl;
 return 0;
}

