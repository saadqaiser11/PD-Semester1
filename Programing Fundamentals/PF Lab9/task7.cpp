#include <iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
main()
{
    int num;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> num;
    double resistance[num];
    cout << "Enter the resistance values (in ohms) of the " << num << " resistors, one per line: " << endl;
    for(int x=0; x<num ; x++)
    {
        cin >> resistance[x];
    }
    cout << "The total resistance of the series circuit is " << calculateTotalResistance( resistance, num ) << " ohms.";
}
double calculateTotalResistance(double resistance[], int num)
{
    double sum=0;
    for(int x=0; x<num; x++)
    {
        sum += resistance[x];
    }
    return sum;
}