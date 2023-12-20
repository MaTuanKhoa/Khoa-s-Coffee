#include <iostream>
using namespace std;
struct Menu{
	public:
		string name_menu;
		int price;		
};


class Customer{
	public:
	string name;
	string cus_order;
	int make_payMent=0;
};

class Waiter{
	public:
		Menu me[5];
		string wai_order;

	void showMenu(int size){

		for (int i = 1;i <= size; i++){
			cout<<"\n\nname "<<me[i].name_menu;
			cout<<"\nprice "<<me[i].price;
		}
	}
};

class Cashier{
	public:
		int get_payMent;
		int moneypaid;
	
	void getPayment(){
		do{
			cout<<"\nyou need pay "<<get_payMent;
			cout<<"\nmoney be paid: ";
			cin>>moneypaid;
			cin.ignore();
			get_payMent=get_payMent-moneypaid;
		}while(get_payMent>0);
		if (get_payMent<0){
			cout<<"\nyour change money is: "<<get_payMent*(-1);
		}	
	}
};

class Bartender{
	public:
	string drink[100];
	
	void makeOrder(int a){
		for (int i=0;i<a;i++){
			if (drink[i]!="ko co")
			cout<<"\nyour drink, "<<drink[i]<<" is ready.";
		}
	}
};
int main()
{
	int size =5;
	Waiter w1;
	Customer c1;
	Bartender b1;
	Cashier ca1;
	w1.me[5];
	string end;
	int a=0;
	for (int dk=0;dk<100;dk++){
		b1.drink[a]="ko co";
	}
	w1.me[1].name_menu = "tra sua";
	w1.me[1].price = 30000;
	w1.me[2].name_menu = "tra dao cam sa";
	w1.me[2].price = 25000;
	w1.me[3].name_menu = "tra gung";
	w1.me[3].price = 20000;
	w1.me[4].name_menu = "tra chanh";
	w1.me[4].price = 15000;
	w1.me[5].name_menu = "tra o long";
	w1.me[5].price = 10000;
	do{
		do{
			cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<"\n\nplease order or press any key to show menu: "<<endl;
			getline(cin,c1.cus_order);
			if (c1.cus_order == "tra sua"){
				cout<<"\n"<<w1.me[1].name_menu<<"\nprice: "<<w1.me[1].price<<endl;
				c1.make_payMent = c1.make_payMent + w1.me[1].price;
				b1.drink[a]=w1.me[1].name_menu;
				a++;
				break;
			}

			else if	(c1.cus_order == "tra dao cam sa"){
				cout<<"\n"<<w1.me[2].name_menu<<"\nprice: "<<w1.me[2].price<<endl;
				c1.make_payMent = c1.make_payMent + w1.me[2].price;
				b1.drink[a]=w1.me[2].name_menu;
				a++;
				break;
			}
	
			else if	(c1.cus_order == "tra gung"){
				cout<<"\n"<<w1.me[3].name_menu<<"\nprice: "<<w1.me[3].price<<endl;
				c1.make_payMent = c1.make_payMent + w1.me[3].price;
				b1.drink[a]=w1.me[3].name_menu;
				a++;
				break;
			}
	
			else if	(c1.cus_order == "tra chanh"){
				cout<<"\n"<<w1.me[4].name_menu<<"\nprice: "<<w1.me[4].price<<endl;
				c1.make_payMent = c1.make_payMent + w1.me[4].price;
				b1.drink[a]=w1.me[4].name_menu;
				a++;
				break;
			}
	
			else if	(c1.cus_order == "tra o long"){
				cout<<"\n"<<w1.me[5].name_menu<<"\nprice: "<<w1.me[5].price<<endl;
				c1.make_payMent = c1.make_payMent + w1.me[5].price;
				b1.drink[a]=w1.me[5].name_menu;
				a++;
				break;
			}
	
			else{
				w1.showMenu(size);
				break;
			}
			a++;
		}while(c1.cus_order!=w1.me[1].name_menu
			and c1.cus_order!=w1.me[2].name_menu
			and c1.cus_order!=w1.me[3].name_menu
			and c1.cus_order!=w1.me[4].name_menu
			and c1.cus_order!=w1.me[5].name_menu);
	cout<<"\ndo you want more?"<<"\n('no' to end) "<<endl;
	getline(cin,end);
	}while(end!="no");
	b1.makeOrder(a);
	cout<<"\nyour payment is: "<<c1.make_payMent;
	ca1.get_payMent=c1.make_payMent;
	ca1.getPayment();
	


	return 0;
}
