#include<iostream>
using namespace std;
void calculatePayableAmount(string day, float amount);
main()
{
	string day;
	float amount;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	calculatePayableAmount(day,amount);
}
void calculatePayableAmount(string day,float amount)
{
	if (day=="Sunday")
	{
		amount=amount-(amount*10/100);
	}
	cout<<"Payable Amount: $"<<amount;
}

