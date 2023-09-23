#include<iostream>
using namespace std;
main()
{
	float a,v1,v2,t;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>v1;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>a;
	cout<<"Enter Time (s): ";
	cin>>t;
	v2=(a*t)+v1;
	cout<<"Final Velocity (m/s): "<<v2;
}
	