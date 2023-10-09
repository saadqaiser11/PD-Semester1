#include<iostream>
using namespace std;
string OddishOrEvenish(int num1);
main()
{
	int num;
	cout<<"Enter a five-digit number: ";
	cin>>num;
	string check;
	check = OddishOrEvenish(num);
	cout<<check;
}
string OddishOrEvenish(int num1)
{
	int num2,num3,num4,num5,A,B,C,D,E,result;
	num2=num1%10000;
	num3=num2%1000;
	num4=num3%100;
	num5=num4%10;
	A=num1/10000;
	B=num2/1000;
	C=num3/100;
	D=num4/10;
	E=num5;
	result=A+B+C+D+E;
	if (result%2==1)
	{
		return "Oddish";
	}
	if (result%2==0)
	{
		return "Evenish";
	}
}