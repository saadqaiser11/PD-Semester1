#include<iostream>
using namespace std;
void longestTime(int hour,int minute);
main()
{
	int hr,min;
	cout<<"Enter the number of hours: ";
	cin>>hr;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	longestTime(hr,min);
}
void longestTime(int hour,int minute)
{
	hour=hour*60;
	if (hour<minute)
	{
		cout<<minute;
	}
	if (hour>minute)
	{
		hour=hour/60;
		cout<<hour;
	}

}