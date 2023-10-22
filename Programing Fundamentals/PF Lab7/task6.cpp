#include <iostream>
using namespace std;
int calculateGCD(int a, int b);
int calculateLCM(int a, int b);
int main() 
{
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "enter the second number: ";
    cin >> num2;
    int gcdResult = calculateGCD(num1, num2);
    int lcmResult = calculateLCM(num1, num2);
    cout << "GCD: " << gcdResult << endl;
    cout << "LCM: " << lcmResult << endl;
}
int calculateGCD(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return calculateGCD(b, a % b);
}
int calculateLCM(int a, int b) 
{
    return (a * b) / calculateGCD(a, b);
}