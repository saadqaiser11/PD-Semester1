#include<iostream>
using namespace std;
void calculatePayableAmount(string day, float amount);
main()
{
string day;
float amount;
while(true)
	{
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	calculatePayableAmount(day,amount);
	}
}
void calculatePayableAmount(string day,float amount)
{
		if (day=="Sunday")
		{
			amount=amount-(amount/10);
		}
		if (day!="Sunday")
		{
			amount=amount-(amount/20);
		}
		cout<<"Payable Amount: $"<<amount<<endl;
}