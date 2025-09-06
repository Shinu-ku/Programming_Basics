// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include<fstream>
using namespace std;

int main(){
cout<<"Program Start"<<endl;
ofstream StudentData("vitData1.txt",ios::app);

StudentData<<"This is second line for Hello! I am using concept of File Handling in CPP"<<endl;
StudentData.close();
cout<<"Program End"<<endl;
 return 0;
}

