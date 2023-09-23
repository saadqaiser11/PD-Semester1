#include<iostream>
using namespace std;
main()
{
	float imp,play,per;
	cout<<"Enter Imposter Count: ";
	cin>>imp;
	cout<<"Enter Player Count: ";
	cin>>play;
	per=(imp/play)*100;
	cout<<"Chance of being an imposter: "<<per<<"%";
}
