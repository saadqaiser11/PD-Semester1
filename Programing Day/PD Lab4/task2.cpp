#include<iostream>
using namespace std;
void Reverse(string value);
main()
{
	string value1;
	cout<<"Enter 'true' or 'false': ";
	cin>>value1;
	Reverse(value1);
}
void Reverse(string value)
{
	if (value=="true")
	{
		cout<<"false";
	}
	if (value=="false")
	{
		cout<<"true";
	}
}