#include<iostream>
using namespace std;
int calculateMoney(int age, int machineprice,int toyprice);
main()
{
	int age,machine,toy,diff,totalAmount;	
	cout<<"Enter Lilly's age: ";
	cin>>age;
	cout<<"Enter the price of the waching machine: ";
	cin>>machine;
	cout<<"Enter the unit price of each toy: ";
	cin>>toy;
	totalAmount=calculateMoney(age,machine,toy);
	if(totalAmount>machine)
	{
	cout<<"Yes!"<<endl;
	diff=totalAmount-machine;
	}
	if(totalAmount<machine)
	{
	cout<<"No!"<<endl;
	diff=machine-totalAmount;
	}
	cout<<diff;
}
int calculateMoney(int age, int machineprice,int toyprice)
{
	int save=0,money1=0,gift1=10,toy1=0;
	for(int year=1;year<=age;year=year + 1)
	{
	if(year%2==0)
	{
	money1=(money1+gift1)-1;
	gift1=gift1+10;
	}
	else
	{
	toy1=toy1+1;
	}
	}
	save=money1+(toy1*toyprice);
	return save;
}