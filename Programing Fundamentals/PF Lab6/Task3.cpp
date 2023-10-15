#include <iostream>
using namespace std;
float perimeter(char ch,float number);
main()
{
    float number,result;
    char ch;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> ch;
    cout << "Enter the value: ";
    cin >> number;
    result = perimeter(ch,number);
    cout << "The perimeter is: " << result;
}
float perimeter(char ch,float number)
{
    float result;
    if (ch == 's')
    {
        return 4 * number;
    }
    if (ch == 'c')
    {
        return 6.28 * number;
    }
    if (ch == 't')
    {
        return 3 * number;
    }
    if (ch == 'h')
    {
        return 6 * number;
    }
}