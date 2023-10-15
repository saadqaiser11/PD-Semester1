#include <iostream>
using namespace std;
int greaterNumber(int num1,int num2);
main()
{
    int num1,num2,result;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    result = greaterNumber(num1,num2);
    cout << result;
}
int greaterNumber(int num1,int num2)
{
    if (num1>num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}