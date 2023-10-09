#include<iostream>
using namespace std;
void projectTimeCalculation(int hours,int days,int number);
main()
{
	int hours,days,number;
	cout<<"Enter the needed hours: ";
	cin>>hours;
	cout<<"Enter the days that the firm has: ";
	cin>>days;
	cout<<"Enter the number of all workers: ";
	cin>>number;
	projectTimeCalculation(hours,days,number);
}
void projectTimeCalculation(int hours,int days,int number)
{
	int neededHours;
	number=number*9;
	days=days*number;
	if (days>=hours)
	{
		neededHours=days-hours;
		cout<<"Yes!"<<neededHours<<" hours left.";
	}
	if (days<hours)
	{
		neededHours=hours-days;
		cout<<"Not enough time! "<<neededHours<<" hours needed.";
	}
}