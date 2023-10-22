#include <iostream>
using namespace std;
void frequencyChecker(int number, int digit);
main()
{
    int number,digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    frequencyChecker(number,digit);
}
void frequencyChecker(int number, int digit)
{
    int frequency = 0,lastDigit;
    while (number > 0)
    {
        lastDigit = number % 10;
        if (lastDigit == digit) 
        {
            frequency=frequency+1;
        }
        number = number / 10;
    }
    cout << "Frequency: " << frequency;
}