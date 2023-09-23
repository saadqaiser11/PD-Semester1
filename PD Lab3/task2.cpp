#include<iostream>
using namespace std;
main()
{
	float min,sec,frame,fps;
	cout<<"Number of Minutes: ";
	cin>>min;
	sec=min*60;
	cout<<"Frames per Second: ";
	cin>>frame;
	fps=sec*frame;
	cout<<"Total Number of Frames: "<<fps;
}
