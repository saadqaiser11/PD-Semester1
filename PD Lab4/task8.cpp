#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int daysOff;
	cout<<"Holidays: ";
	cin>>daysOff;
	pet(daysOff);
}
void pet(int holidays)
{
	int workingDays,time,difference,hour,difference1,difference2;
	float min;
	workingDays=365-holidays;
	time=(workingDays*63+holidays*127);
	difference=(time-30000);
	if(time<30000)
	{
		difference1=(30000-time);
	}
	if (time>30000)
	{
		difference1=(time-30000);
	}
	hour=difference1/60;
	min=difference1 % 60;
	if (difference<0)
	{
		cout<<"Tom sleeps well"<<endl<<hour<<" hours and "<<min<<" minutes less for play";
	}
	if (difference>0)
	{
		cout<<"Tom will run away"<<endl<<hour<<" hours and "<<min<<" minutes for play";
	}
}