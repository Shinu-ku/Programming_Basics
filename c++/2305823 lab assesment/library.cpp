// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Student {
	string name;
	int numofbooks;
	float* bookprices = NULL;
	float tprice;
	
	Student() : numofbooks(0), bookprices(), tprice(0){
	}
	
	~Student(){
		delete[] bookprices;
	}
};

void inputStdata(Student& student){
	
	//name
	cout<<"Enter you're name: ";
	cin>>student.name;
	
	//number of books
	cout<<"Enter the number of books issued :";
	cin>>student.numofbooks;
	
	student.bookprices = new float[student.numofbooks];
	
	//total price of books
	for(int i = 0; i < student.numofbooks; i++ ) {
	cout << "Enter the price of book " << i + 1 <<": ";
	cin >> student.bookprices[i];
	student.tprice += student.bookprices[i];	
	}
}

void displaystdata(const Student& student){
	//	display data
	cout<< "The name of student : "<<student.name<<endl;
	cout<< "The number of books issued : "<<student.numofbooks<<endl;
	for(int i = 0; i < student.numofbooks; i++) {
		cout << student.bookprices[i] <<", ";
	}
	cout<< "\nThe final amount of books is : "<<student.tprice<<endl;
	cout<<endl;
}

void saveToFile(const Student& student, ofstream& file){
	file <<"Name: "<< student.name<<endl;
	file <<"Number of books issued: "<< student.numofbooks<<endl;
	file << "Price of issued books: ";
	for (int i = 0; i < student.numofbooks; i++){
		file<<student.bookprices[i] << ", ";
	}
	file <<"\nThe final amount of books is : "<<student.tprice<<endl;
	file<<"----------------------------------------------"<<endl;
}

int main(){
	int numStudents;
	cout<<"Student library system"<<endl;
	cout<<"Enter the no. of Students: ";
	cin>>numStudents;
	cout<<endl;
	
	ofstream file("library_data.txt", ios::app);
	if(!file){
		cerr<<"error opening file!"<<endl;
		return 1;
	}
	
	
	Student* student = new Student[numStudents];
	
	//input data
	for (int i = 0; i < numStudents; i++){
		cout << "\n---Enter details for Student---"<<i + 1 << endl;
		inputStdata(student[i]);
		saveToFile(student[i],file);
	}
	
	// Display data 
    cout << "\n---Displaying Student Data---" << endl;
    for (int i = 0; i < numStudents; i++) {
        displaystdata(student[i]);
	}
	
    delete[] student;
	file.close();
	return 0;	
}
