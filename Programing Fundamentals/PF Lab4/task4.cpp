#include<iostream>
using namespace std;
void add(float n1,float n2);
void mul(float n1,float n2);
void div(float n1,float n2);
void sub(float n1,float n2);
main()
{
	float num1,num2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	if (op=='+')
	{
		add(num1,num2);
	}
	if (op=='-')
	{
		sub(num1,num2);
	}
	if (op=='*')
	{
		mul(num1,num2);
	}
	if (op=='/')
	{
		div(num1,num2);
	}
}
void add(float n1,float n2)
{
	float ans;
	ans=n1+n2;
	cout<<"Addition: "<<ans;
}
void sub(float n1,float n2)
{
	float ans;
	ans=n1-n2;
	cout<<"Subtraction: "<<ans;
}
void mul(float n1,float n2)
{
	float ans;
	ans=n1*n2;
	cout<<"Multiplication: "<<ans;
}
void div(float n1,float n2)
{
	float ans;
	ans=n1/n2;
	cout<<"Division: "<<ans;
}


