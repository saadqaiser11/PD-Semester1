#include<iostream>
using namespace std;
void howManyStrickers(int sides,int stickers);
main()
{
	int side,sticker;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>side;
	howManyStrickers(side,sticker);
}
void howManyStrickers(int sides,int stickers)
{
	stickers=(sides*sides)*6;
	cout<<"Number of stickers needed: "<<stickers;
}