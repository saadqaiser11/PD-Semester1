#include<iostream>
using namespace std;
void isEqual(int n1, int n2);
main()
{
	int num1;
	cout<<"Enter the first number: ";
	cin>>num1;
	int num2;
	cout<<"Enter the second number: ";
	cin>>num2;
	isEqual(num1,num2);
}
void isEqual(int n1, int n2)
{
	if(n1==n2)
	{
		cout<<"true";
	}
	if (n1!=n2)
	{
		cout<<"false";
	}
}