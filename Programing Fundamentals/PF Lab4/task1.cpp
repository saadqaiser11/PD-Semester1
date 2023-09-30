#include <iostream>
using namespace std;
void  calculateFuel(float dis,float fue);
main()
{
	float dist,fuel;
	cout<<"Enter the distance: ";
	cin>>dist;
	calculateFuel(dist,fuel);
}
void calculateFuel(float dis,float fue)
{		
	fue=dis*10;
	cout<<"Fuel needed: "<<fue;
}