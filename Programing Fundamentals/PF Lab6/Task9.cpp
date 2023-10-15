#include <iostream>
using namespace std;
string checkTitle(int age , char gender);
main()
{
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    string result = checkTitle(age,gender);
    cout << "Your personal title is: " << result;
}
string checkTitle(int age , char gender)
{
    if (gender == 'm')
    {
        if (age >= 16)
        {
            return "Mr.";
        }
        if (age<16)
        {
            return "Master";
        }
    }
    if (gender == 'f')
    {
        if (age >=16)
        {
            return "Ms.";
        }
        if (age<16)
        {
            return "Miss";
        }
    }
}
