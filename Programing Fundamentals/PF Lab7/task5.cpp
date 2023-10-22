#include <iostream>
using namespace std;
void digitSum(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    digitSum(number);
}
void digitSum(int number)
{
    int sum = 0,num;
    while (number > 0)
    {
        num = number % 10;
        sum = sum + num;
        number = number / 10;    
    }
    cout << "Sum of digits: " << sum;
}