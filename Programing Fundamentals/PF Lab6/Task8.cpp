#include <iostream>
using namespace std;
float discount(string day,string month,float amount);
main()
{
    string day,month;
    float amount;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;
    float result = discount(day,month,amount);
    cout << "Payable Amount after discount: " << result;
}
float discount(string day,string month,float amount)
{
    float payable = amount;
    if ((day == "Sunday") && (month == "October" || month == "March" || month == "August"))
    {
        payable = amount - ((amount * 10)/100);
    }
    if ((day == "Monday") && (month == "November" || month == "December"))
    {
        payable = amount - ((amount * 5)/100);
    }
    return payable;
}