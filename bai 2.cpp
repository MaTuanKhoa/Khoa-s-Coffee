#include <iostream>
#include <fstream>
using namespace std;
struct Product{
	char Code[15];
	char ProductName[50];
	double Price;
	int Quantity;
};
int main()
{
	string product10;
	ofstream File("Quantity10.txt");
	int n;
	cout<<"type number of product: "<<endl;
	cin>>n;
	cin.ignore();
	Product a[n];
	for (int i=0;i<n;i++){
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"type code of product: "<<endl;
		cin.getline(a[i].Code, 15);
		cout<<"type name of product: "<<endl;
		cin.getline(a[i].ProductName, 50);
		cout<<"type price of product: "<<endl;
		cin>>a[i].Price;
		cin.ignore();
		cout<<"type quantity of product: "<<endl;
		cin>>a[i].Quantity;
		cin.ignore();
	}
	for (int i=0;i<n;i++){
//		int j=1;
		if (a[i].Quantity>10){
			File <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			File <<"\nSan pham thu:"<<i+1;
			File <<"\nName of product: "<<a[i].ProductName;
			File <<"\nMa code"<<a[i].Code;
			File <<"\nPrice: "<<a[i].Price;
			File <<"\nQuantity: "<<a[i].Quantity;
		}
	}
	File.close();

	ifstream ReadFile("Quantity10.txt");
	while (getline (ReadFile, product10)) {
 	cout << product10<<endl;
	}
	ReadFile.close();
	return 0;
}
