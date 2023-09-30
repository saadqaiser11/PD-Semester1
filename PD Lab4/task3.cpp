#include<iostream>
using namespace std;
void Discount(string name,float price);
main()
{
	string name1;
	float price1;
	cout<<"Enter the country's name: ";
	cin>>name1;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price1;
	Discount(name1,price1);
}
void Discount(string name,float price)
{
	if (name=="Pakistan")
	{
		price=price-(price*5)/100;
		cout<<"Final ticket price after discount: $"<<price;
	}
	if (name=="Ireland")
	{
		price=price-(price*10)/100;
		cout<<"Final ticket price after discount: $"<<price;
	}
	if (name=="India")
	{
		price=price-(price*20)/100;
		cout<<"Final ticket price after discount: $"<<price;
	}
	if (name=="England")
	{
		price=price-(price*30)/100;
		cout<<"Final ticket price after discount: $"<<price;
	}
	if (name=="Canada")
	{
		price=price-(price*45)/100;
		cout<<"Final ticket price after discount: $"<<price;
	}
}					