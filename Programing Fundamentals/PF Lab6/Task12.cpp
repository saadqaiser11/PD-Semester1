#include <iostream>
using namespace std;
float totalIncome(string price,int rows,int columns);
main()
{
    string price;
    int rows,columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> price;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    float result = totalIncome(price,rows,columns); 
    cout << result;
}
float totalIncome(string price,int rows,int columns)
{
    float payable;
    if (price == "Premiere")
    {
        payable = rows*columns*12;
    }
        if (price == "Normal")
    {
        payable = rows*columns*7.5;
    }
        if (price == "Discount")
    {
        payable = rows*columns*5;
    }
    return payable;
}