#include<iostream>
using namespace std;
void evenOrOdd(int number);
main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	evenOrOdd(num);
}
void evenOrOdd(int number)
{
	if(number%2==0)
	{
		cout<<"Number "<<number<<" is even";
	}
	if (number%2!=0)
	{
		cout<<"NUmber "<<number<<" is odd";
	}
}