#include <iostream>
using namespace std;
float purchase(char service, char time, float min);
main()
{
    char service, time;
    float min;
    string type;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> service;
    if(service=='P' || service=='p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes used: ";
    cin >> min;
    if(service=='P' || service=='p')
    {
        type="Premium";
    }
    else
    {
        type="Regular";
    }
    float result = purchase(service,time,min);
    cout << "Service Type: " << type << endl;
    cout << "Total Minutes Used: " << min << " minutes" << endl;
    cout << "Amount Due: $" << result;

}
float purchase(char service, char time, float min)
{
    float amount, remainingTime,ab;
    if(service=='P' || service=='p')
    {
        if(time=='D' || time=='d')
        {
            if(min>75)
            {
                remainingTime=min-75;
                ab= (((remainingTime)*10)/100);
                return 25+ab;
            }
            else
            {
            return 25;
            }
        }
        if(time=='N' || time=='n')
        {
            if(min>100)
            {
                remainingTime=min-100;
                ab= (((remainingTime)*5)/100);
                return 25+ab;
            }
            else
            {
                return 25;
            }
        }
    }
    if(service=='R' || service=='r')
    {
        if(min>50)
        {
            remainingTime=min-50;
            ab= (((remainingTime)*20)/100);
            return 10+ab;
        }
        else
        {
            return 10;
        }
    }
}