#include<iostream>
using namespace std;
void possibleBonus(int pos1,int pos2);
main()
{
	int position1,position2;
	cout<<"Enter your position: ";
	cin>>position1;
	cout<<"Enter your friend's position: ";
	cin>>position2;
	possibleBonus(position1,position2);
}
void possibleBonus(int pos1,int pos2)
{
	if (pos2-pos1<=6)
	{
		cout<<"true";
	}
	if (pos2-pos1>6)
	{
		cout<<"false";
	}
}
