#include <iostream>
using namespace std;
bool areSameNumber(int num1,int num2,int num3);
main()
{
    int num1,num2,num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    bool result = areSameNumber(num1,num2,num3);
    cout << result ;
}
bool areSameNumber(int num1,int num2,int num3)
{
    if (num1 == num2 && num1 == num3)
    {
        return true;
    }
    else
    {
        return false;
    }
}