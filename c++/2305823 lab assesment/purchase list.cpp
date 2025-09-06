// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Purchase {
	string name;
	int numofitems;
	float* itemprices = NULL;
	float tprice;
	
	Purchase() : numofitems(0), itemprices(), tprice(0){
	}
	
	~Purchase(){
		delete[] itemprices;
	}
};

void inputStdata(Purchase& purchase){
	
	//name
	cout<<"Enter the date/time: ";
	cin>>purchase.name;
	
	//number of books
	cout<<"Enter the number of items purchased :";
	cin>>purchase.numofitems;
	
	purchase.itemprices = new float[purchase.numofitems];
	
	//total price of books
	for(int i = 0; i < purchase.numofitems; i++ ) {
	cout << "Enter the price of items " << i + 1 <<": ";
	cin >> purchase.itemprices[i];
	purchase.tprice += purchase.itemprices[i];	
	}
}

void displaystdata(const Purchase& purchase){
	//	display data
	cout<< "The date/time of purchase : "<<purchase.name<<endl;
	cout<< "The number of Items purchased : "<<purchase.numofitems<<endl;
	for(int i = 0; i < purchase.numofitems; i++) {
		cout << purchase.itemprices[i] <<", ";
	}
	cout<< "\nThe final amount of Items is : "<<purchase.tprice<<endl;
	cout<<endl;
}

void saveToFile(const Purchase& purchase, ofstream& file){
	file <<"Name: "<< purchase.name<<endl;
	file <<"Number of Item purchased: "<< purchase.numofitems<<endl;
	file << "Price of Item purchased: ";
	for (int i = 0; i < purchase.numofitems; i++){
		file<<purchase.itemprices[i] << ", ";
	}
	file <<"\nThe final amount of Items is : "<<purchase.tprice<<endl;
	file<<"----------------------------------------------"<<endl;
}

int main(){
	int numPurchases;
	cout<<"Item Purchase system"<<endl;
	cout<<"Enter the no. of Items: ";
	cin>>numPurchases;
	cout<<endl;
	
	ofstream file("Purchase_data.txt", ios::app);
	if(!file){
		cerr<<"error opening file!"<<endl;
		return 1;
	}
	
	Purchase* purchase = new Purchase[numPurchases];
	
	//input data
	for (int i = 0; i < numPurchases; i++){
		cout << "\n---Enter details for Purchase---"<<i + 1 << endl;
		inputStdata(purchase[i]);
		saveToFile(purchase[i],file);
	}
	
	// Display data 
    cout << "\n---Displaying Purchase Data---" << endl;
    for (int i = 0; i < numPurchases; i++) {
        displaystdata(purchase[i]);
	}
	
    delete[] purchase;
	file.close();
	return 0;	
}
