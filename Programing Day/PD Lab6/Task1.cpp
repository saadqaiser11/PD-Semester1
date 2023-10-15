#include <iostream>
using namespace std;
string decideActivity(string temp,string humid);
main()
{
    string temp,humid;
    cout  << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> humid;
    string result = decideActivity(temp,humid);
    cout << "Recommended activity: " << result;
}
string decideActivity(string temp,string humid)
{
    if (temp == "warm" && humid == "dry")
    {
        return "Play tennis";
    }
    if (temp == "warm" && humid == "humid")
    {
        return "Swim";
    }
    if (temp == "cold" && humid == "dry")
    {
        return "Play basketball";
    }
    if (temp == "cold" && humid == "humid")
    {
        return "Watch TV";
    }
}
