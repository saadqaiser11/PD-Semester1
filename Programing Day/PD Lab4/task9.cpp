#include<iostream>
using namespace std;
void tpChecker(int people,int tissuePaper);
main()
{
	int people1,roll;
	cout<<"Number of people in the household: ";
	cin>>people1;
	cout<<"Number of rolls of TP: ";
	cin>>roll;
	tpChecker(people1,roll);
}
void tpChecker(int people,int tissuePaper)
{
	int sheets,days;
	sheets=tissuePaper*500;
	days=sheets/(people*57);
	if (days>=14)
	{
		cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}
	if (days<14)
	{
		cout<<"Your TP will only last "<<days<<" days, buy more!";
	}
}