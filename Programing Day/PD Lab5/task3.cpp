#include<iostream>
using namespace std;
float taxCalculator(float price1,string type1);
main()
{
	float price,result;
	string type;
	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;
	cout<<"Enter the price of the vehicle: $";
	cin>>price;
	result=taxCalculator(price,type);
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<result<<".";
}
float taxCalculator(float price1,string type1)
{
	float tax,finalPrice;
	if (type1=="M")
	{
		tax=(price1*6)/100;
	}
	if (type1=="E")
	{
		tax=(price1*8)/100;
	}
	if (type1=="S")
	{
		tax=(price1*10)/100;
	}
	if (type1=="V")
	{
		tax=(price1*12)/100;
	}
	if (type1=="T")
	{
		tax=(price1*15)/100;
	}
	finalPrice=price1+tax;
	return finalPrice;
}
