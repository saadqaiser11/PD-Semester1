#include <iostream>
#include <conio.h>
using namespace std;
void header();
int menu();
void product(string name,float price,int quantity,float tax,float total);
float totalCost(float price,int quantity,float tax);
void message();
string type();
main()
{
	string shopName = type(); 
	string name1="Sneakers",name2="Spikes \t",name3="Grippers";
	float price1=300.0,price2=700.0,price3=1000.0;
	int quantity1=0,quantity2=0,quantity3=0;
	float tax1=10.0,tax2=15.0,tax3=10.0;
	float total1=0.0,total2=0.0,total3=0.0;
	int option;
	while (true)
	{
		header();
		option = menu();
		if (option == 1) 
		{
			cout << "Enter the No. of Pairs you want to buy: ";
			cin >> quantity1;
		}
		if (option == 2)
		{
			cout << "Enter the No. of Pairs you want to buy: ";
			cin >> quantity2;
		}
		if (option == 3)
		{
			cout << "Enter the No. of Pairs you want to buy: ";
			cin >> quantity3;
		}
		if (option == 4)
		{
			total1 = totalCost(price1, quantity1, tax1);
			total2 = totalCost(price2, quantity2, tax2);
			total3 = totalCost(price3, quantity3, tax3);
			float totalAmount;
			totalAmount = total1 + total2 + total3;
			cout << "Total Amount So Far (including tax): $" << totalAmount << endl;
		}
		if (option == 5)
		{
			total1 = totalCost(price1, quantity1, tax1);
			total2 = totalCost(price2, quantity2, tax2);
			total3 = totalCost(price3, quantity3, tax3);
			float totalAmount;
			totalAmount = total1 + total2 + total3;
			cout << "All Products Data" << endl;
			cout << "Name: " << shopName << endl;
			cout << "Name" << " \t  \t \t" << "Price " << "\t"  << "No. of Pairs" << "\t" << "Tax(%)" << "\t" <<
			"TotalPerProduct" << endl;
			product(name1, price1, quantity1, tax1, total1);
			product(name2, price2, quantity2, tax2, total2);
			product(name3, price3, quantity3, tax3, total3);
			cout << "Total Amount is: "<<totalAmount<<endl;
		}
		if (option == 6)
		{
			message();
		}
		if (option == 7)
		{
			return 0;
		}
		cout << "Press any Key to Continue: ";
		getch();
		system("cls");
	}
}
void header()
{
	system ("Color 	84");
	cout << "############################################################" << endl;
	cout << "************************************************************" << endl;
	cout << "#################Shoes Selling Shop########################" << endl;
	cout << "************************************************************" << endl;
	cout << "############################################################" << endl;
	cout << endl<<endl;
}
int menu()
{
	int option;
	cout << "Select one of the following options number..." << endl;
	cout << "1. Enter 1(for sneakers)" << endl;
	cout << "2. Enter 2(for spikes)" << endl;
	cout << "3. Enter 3(for grippers)" << endl;
	cout << "4. TotalAmount" << endl;
	cout << "5. Result" << endl;
	cout << "6. Message" << endl;
	cout << "7. Exit" << endl;
	cout << "Your Option..";
	cin >> option;
	return option;
}
float totalCost(float price, int quantity, float tax)
{
	float total,totalPrice;
	total = price * quantity;
	totalPrice = total + (total * (tax / 100));
	return totalPrice;
}
void product(string name, float price, int quantity, float tax, float total)
{
	cout << name << " \t \t" << price << "\t" << quantity << "\t\t" << tax << "\t" << total << endl;
}
void message()
{
	cout << "############################################################" << endl;
	cout << "############################################################" << endl;
	cout << "       Thanks For Shopping and Hopefully You Enjoyed      " << endl;
	cout << "############################################################" << endl;
	cout << "############################################################" << endl;
}
string type()
{
	int op;
	cout << "1 for Nike: " << endl;
	cout << "2 for Adidas: " << endl;
	cout << "3 for Puma: " << endl;
	cout << "Your Option.." ;
	cin >> op;
	if (op == 1)
	{
		return "Nike";
	}
	if (op == 1)
	{
		return "Adidas";
	}
	if (op == 3)
	{
		return "Puma";
	}
}