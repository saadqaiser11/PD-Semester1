#include<iostream>
using namespace std;
void Name(string name);
main()
{
	string name;
	cout<<"Enter the Name: ";
	cin>>name;
	Name(name);
}
void Name(string name)
{
	while(true)
	{
		cout<<"The Name is: "<<name<<endl;
	}
}