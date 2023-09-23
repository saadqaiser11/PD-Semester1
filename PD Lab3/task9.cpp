#include<iostream>
using namespace std;
main()
{
	int num1,num2,num3,num4,A,B,C,D,res;
	cout<<"Enter a 4-digit number: ";
	cin>>num1;
	num2=num1%1000;
	num3=num2%100;
	num4=num3%10;
	A=num1/1000;
	B=num2/100;
	C=num3/10;
	D=num4;
	res=A+B+C+D;
	cout<<"Sum of the individual digits: "<<res;
}