#include<iostream>
using namespace std;
main()
{
	string name;
	float kilo,day;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>kilo;
	day=kilo*15;
	cout<<name<<" will need "<<day<<" days to lose "<<kilo<<" kg of weight by following the doctor's suggestions";
}