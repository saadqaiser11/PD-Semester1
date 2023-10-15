#include <iostream>
using namespace std;
float lowestPrice(int num, string day);
main()
{
	int num;
 	string day;
 	cout << "Enter the number of kilometers: ";
	cin >> num;
	cout << "Enter the period of the day (day/night): ";
	cin >> day;
	float result = lowestPrice(num, day);
	cout << "Lowest price for "<< num << " kilometers: "<< result << " EUR" ;
}
float lowestPrice(int num, string day)
{
	float price;
	if(num<20)
		{
			if(day=="day")
			{
				price = (num*(0.79))+.70;
			}
			if(day=="night")
			{
				price = (num*(0.90))+.70;
			}
		}
	if(num>=20 && num<100)
	{
		price = num*(0.09);
	}
	if(num>=100)
	{
        	price = num*(0.06);
	}
	return price;
}