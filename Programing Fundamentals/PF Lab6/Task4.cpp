#include <iostream>
using namespace std;
int findGreatest(int num1,int num2,int num3);
main()
{
    int num1,num2,num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    int result = findGreatest(num1,num2,num3);
    cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << result ;
}
int findGreatest(int num1,int num2,int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}