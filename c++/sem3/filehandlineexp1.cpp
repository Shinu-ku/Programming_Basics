// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include<fstream>
using namespace std;

int main(){
cout<<"Program Start"<<endl;
ofstream StudentData("vitData1.html",ios::out);

StudentData<<"<!DOCTYPE html><html lang=""en""><head>    <meta charset=""UTF-8"">    <meta name=""viewport"" content=""width=device-width, initial-scale=1.0"">  " " <title>Document</title></head><body></body></html>"<<endl;
StudentData.close();
cout<<"Program End"<<endl;
 return 0;
}

