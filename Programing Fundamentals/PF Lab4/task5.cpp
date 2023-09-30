#include<iostream>
using namespace std;
void Eligible(int elig);
main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	Eligible(age);
}
void Eligible(int elig)
{
	if (elig>=18)
	{
		cout<<"You are eligible to vote.";
	}
	if (elig<18)
	{
		cout<<"You are not eligible to vote.";
	}
}