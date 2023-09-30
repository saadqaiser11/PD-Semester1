#include <iostream>
using namespace std;
void inchesToFeet(float inc,float fet);
main()
{
	float inch,feet;
	cout<<"Enter the measurement in inches: ";
	cin>>inch;
	inchesToFeet(inch,feet);
}
void inchesToFeet(float inc,float fet)
{
	fet=inc/12;
	cout<<"Equivalent in feet: "<<fet;
}