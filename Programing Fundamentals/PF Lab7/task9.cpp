#include<iostream>
using namespace std;
int calculatePrice(int amount, int year);
main()
{
	int amount,year,result;
	cout<<"Enter Money: ";
	cin>>amount;
	cout<<"Enter Year: ";
	cin>>year;
	result=calculatePrice(amount,year);
	if(result<amount)
	{
		result=amount-result;
		cout<<"Yes! He will live a carefree life and will have "<<result<<" dollars left.";
	}
	if(result>amount)
	{
		result=result-amount;
		cout<<"He will need "<<result<<" dollars to survive.";
	}
}
int calculatePrice(int money, int year)
{
	int total=0,price,age=18;
	for(int newYear=1800;newYear<=year;newYear++)
	{
		if(newYear%2==0)
		{
			price=12000;
		}
		else
		{
			price=12000+(50*age);
		}
		total=total+price;
		age=age+1;
	}
	return total;
}