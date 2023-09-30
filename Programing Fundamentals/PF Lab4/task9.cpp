#include <iostream>
using namespace std;
void  amount(float dis,float fue);
main()
{
	float dist,fuel;
	cout<<"Enter the distance: ";
	cin>>dist;
	amount(dist,fuel);
}
void amount(float dis,float fue)
{		
	fue=dis*10;
	cout<<"Fuel needed: "<<fue;
	if (fue>=100)
	{
		cout<<"Fuel needed: "<<fue;
	}
	if (fue<100)
	{
		cout<<"Fuel needed: 100";
	}
}