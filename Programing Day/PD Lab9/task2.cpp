#include <iostream>
using namespace std;
string containsSeven(int number[], int num);
main()
{
    int num;
    cout << "Enter the size of Array: ";
    cin >> num;
    int number[num];
    for(int x=0; x<num ; x++)
    {
        cout << "Enter Element " << x+1 << ": ";
        cin >> number[x];
    }
    cout << containsSeven(number, num);
}

string containsSeven(int number[], int num)
{
    string value="there is no 7 in the array";
    for(int x=0; x<num ; x++)
    {
        int num2=number[x];
        while(num2!=0)
        {
           int num3=num2%10;

        if(num3==7)
        {
            value="Boom!";
            break;
        }
            int num4=num2/10;
            num2=num4;
        }
    }
    return value;
}