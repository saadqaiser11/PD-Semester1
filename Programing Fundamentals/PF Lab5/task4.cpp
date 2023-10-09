#include<iostream>
#include<cmath>
using namespace std;
float Height(float base,float angle);
float height;
main()
{
	float base1,angle1;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>base1;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angle1;
	Height(base1,angle1);
	cout<<"The height of the tree is: "<<height<<" feet";
}
float Height(float base,float angle)
{
	angle=angle/57.2958;
	angle = tan(angle);
	height = base*angle;
	return height;
}
	