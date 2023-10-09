#include<iostream>
using namespace std;
string checkAlphabetCase(char ch1);
main()
{
	char ch;
	string result;
	cout<<"Enter a character (A/a): ";
	cin>>ch;
	result = checkAlphabetCase(ch);
	cout<<result;
	return 0;
}
string checkAlphabetCase(char ch1)
{
	if (ch1=='A')
	{
		return "You have entered Capital A";
	}
	if (ch1=='a')
	{
		return "You have entered small a";
	}
}