#include <iostream>
using namespace std;
void totalDigits(int length);
main()
{
    int length;
    cout << "Enter a number: ";
    cin >> length;
    totalDigits(length);
}
void totalDigits(int length)
{
    int sum=0;
    if (length == 0)
    {
        sum = 1;
    }
    for (;length>0;length=length/10)
    {
        sum = sum + 1;
    }
    cout << "Total number of digits: " << sum;
}