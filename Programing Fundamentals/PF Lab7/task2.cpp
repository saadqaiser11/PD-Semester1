#include <iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int length = 0;
    generateFibonacci(length);
}
void generateFibonacci(int length)
{
    int n1=0,n2=1;
    int num;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    for (int x = 0;x<length;x++)
    {
        num = n1 + n2;
        cout << n1;
        if (x<(length-1))
        {
            cout << ", ";
        }
        n1 = n2;
        n2 = num;
    }
}