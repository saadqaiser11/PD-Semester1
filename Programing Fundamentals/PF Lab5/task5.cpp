#include<iostream>
#include<cmath>
using namespace std;
float deter(float A,float B,float C);
main()
{
	int a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	deter(a,b,c);
}
float deter(float A,float B,float C)
{
	float root1,root2,disc,cal;
	cal=2*A;
	disc=(B*B)-(4*A*C);
	if (disc>0)
	{
		root1=((-B+sqrt(disc))/cal);
		root2=((-B-sqrt(disc))/cal);
		cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
	}
	if (disc<0)
	{
		float root3,root4;
		root1=(-B/cal);
		root3=((sqrt(-(disc)))/cal);
		root2=(-B/cal);
		root4=((sqrt(-(disc)))/cal);
		cout<<"Complex Solutions: x = "<<root1<<" + "<<root3<<"i and x = "<<root2<<" - "<<root4<<"i";
	}
	if (disc==0)
	{
		root1=-B/cal;
		cout<<"Solution: x = "<<root1;
	}
}