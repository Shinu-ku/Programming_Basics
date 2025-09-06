#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Stock{
	string item;
	string company;
	int numofitems;
	int price;
	int tprice;
	
	Stock(): numofitems(0), price(0), tprice(0){
	}
};

void inputdata(Stock& ITlab){
	
	cout <<"Enter the item: ";
	cin>>ITlab.item;
	cout <<"Enter the brand: ";
	cin>>ITlab.company;
	cout <<"Enter the number of item: ";
	cin>>ITlab.numofitems;
	cout <<"Enter the price: ";
	cin>>ITlab.price;
	ITlab.tprice = ITlab.numofitems*ITlab.price;
	
	cout<<"------------------------------------"<<endl;
}
void displaydata(const Stock& ITlab){
	
	cout<<"The item: "<<ITlab.item<<endl;
	cout<<"The company of item: "<<ITlab.company<<endl;
	cout<<"The number of item: "<<ITlab.numofitems<<endl;
	cout<<"The price of item: "<<ITlab.price<<endl;
	cout<<"The total price of items: "<<ITlab.tprice<<endl;
	
	cout<<"----------------------------------------------"<<endl;
}
void saveToFile(const Stock& ITlab, ofstream& file){
	
	file <<"The item: "<<ITlab.item<<endl;
	file <<"Brand: "<<ITlab.company<<endl;
	file <<"The stock: "<<ITlab.numofitems<<endl;
	file <<"The price: "<<ITlab.price<<endl;
	file <<"The total price of items: "<<ITlab.tprice<<endl;
	
	file <<"----------------------------------------------"<<endl;
}
int main(){
	
	int numitem;
	cout<<"ITlab Stock system"<<endl;
	cout<<"Enter the number of enteries : ";
	cin>>numitem;
	cout<<endl;
	
	ofstream file("Stock_data.txt", ios::app);
	if(!file){
		cerr<<"error opening file!"<<endl;
		return 1;
	}
	
	Stock* ITlab = new Stock[numitem];
	
	//input data
	for (int i = 0; i < numitem; i++){
		cout << "\n---Enter details for Stock items---"<<i + 1 << endl;
		inputdata(ITlab[i]);
		saveToFile(ITlab[i],file);
	}
	
	// Display data 
    cout << "\n---Displaying Stock Data---" << endl;
    for (int i = 0; i < numitem; i++) {
        displaydata(ITlab[i]);
	}
	
	file.close();
	return 0;	
}
