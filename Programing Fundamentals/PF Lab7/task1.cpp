#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int num = 0;
    printTable(num);
}
void printTable(int number)
{
    int mul;
    cout << "Enter a number: ";
    cin >> number;
    for (int x = 1 ; x <= 10 ; x++)
    {
        mul = number * x;
        cout << number << " x " << x << " = " << mul << endl;
    }
}