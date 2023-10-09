#include<iostream>
using namespace std;
float volume(float len,float wid,float hei,string uni);
main()
{
	float length,width,height;
	double result;
	string unit;
	cout<<"Enter the lenght of the pyramid (in meters): ";
	cin>>length;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>width;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>height;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>unit;
	result=volume(length,width,height,unit);
	cout<<"The volume of the pyramid is: "<<result<<" cubic meters";
}
float volume(float len,float wid,float hei,string uni)
{
	double vol;
	if (uni=="meters")
	{
		vol = (len*wid*hei)/3;
	}
	if (uni=="millimeters")
	{
		vol=((len*wid*hei)*1000000000)/3;
	}
	if (uni=="centimeters")
	{
		vol=((len*wid*hei)*1000000)/3;
	}
	if (uni=="kilometers")
	{
		vol=((len*wid*hei)*1000)/3;
	}
	return vol;
}	


	