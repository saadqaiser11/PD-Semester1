#include <iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);
main()
{
    int num=4;
    double total;
    double change[num];
    cout << "Enter quarters: ";
    cin >> change[0];

    cout << "Enter dimes: ";
    cin >> change[1];

    cout << "Enter nickels: ";
    cin >> change[2];

    cout << "Enter pennies: ";
    cin >> change[3];

    cout << "Enter the total amount due: $";
    cin >> total;
    cout << "Can you pay the amount? ";
    if(canPayWithChange(change, total))
        cout <<"Yes";
    else
        cout << "No";
}
bool canPayWithChange(double change[], double totalDue)
{
    bool value= false;
    change[0]=change[0]*0.25;
    change[1]=change[1]*0.10;
    change[2]=change[2]*0.05;
    change[3]=change[3]*0.01;
    double sum=0;
    for(int i=0; i<4 ; i++)
    {
        sum+=change[i];
    }
    if(sum>=totalDue)
        value = true;
    return value;
}