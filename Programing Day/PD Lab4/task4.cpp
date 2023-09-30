#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
	int speed1;
	cout<<"Speed: ";
	cin>>speed1;
	checkSpeed(speed1);
}
void checkSpeed(int speed)
{
	if (speed>100)
	{
		cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
	if (speed<=100)
	{
		cout<<"Perfect! You're going good.";
	}
}