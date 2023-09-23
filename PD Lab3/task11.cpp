#include<iostream>
using namespace std;
main()
{
	int age,move,ave;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>move;
	move=move+1;
	ave=age/move;
	cout<<"Average number of years lived in the same house: "<<ave;
}