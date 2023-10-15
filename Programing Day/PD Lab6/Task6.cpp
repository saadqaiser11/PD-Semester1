#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int num);
int main()
{
    string month;
    int num;
    string result;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> num;
    result= calculateHotelPrices(month, num);
    cout << result;
}
string calculateHotelPrices(string month, int num)
{
    float stPrice, apPrice;
    string result;
    if(month=="May" || month=="October")
    {
        apPrice = 65;
        stPrice = 50;
        if(num>7 && num<=14)
        {
            stPrice=stPrice-((stPrice*5)/100);       
        }
        if(num>14)
        {
            stPrice= stPrice-((stPrice*3)/100);
            apPrice= apPrice-((apPrice*10)/100);
        }    
    }
    if(month=="June" || month=="September")
    {
        apPrice = 68.70;
        stPrice = 75.20;
        if(num>14)
        {
            stPrice= stPrice-((stPrice*20)/100);
            apPrice= apPrice-((apPrice*10)/100);
        
        }
    }
    if(month=="July" || month=="August")
    {
        stPrice= 76;
        apPrice=77;
        if(num>14)
        {
            apPrice= apPrice-((apPrice*10)/100);
        }
    }
    stPrice=stPrice*num;
    apPrice=apPrice*num;
    return "Apartment: " +to_string(apPrice) + "$.\nStudio: " +to_string(stPrice) + "$.";
}