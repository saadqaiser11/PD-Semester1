#include <iostream>
using namespace std;
int calculateDamage(string,string,float,float);
int main()
{
    string a,b;
    float c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << calculateDamage(a,b,c,d);
}
int calculateDamage(string a,string b,float c,float d)
{
    int damage,effect;
    if ((a == "fire" && b == "grass" )||(a== "water"&&b=="fire")||(a=="grass"||b=="water")||(a=="electric"&&b=="water"))
    {
        effect = 2;
    }
    if ((b == "fire" && a == "grass" )||(b== "water"&& a=="fire")||(b=="grass"|| a=="water")||(b=="electric"&& a=="water"))
    {
        effect = 0.5;
    }
    else
    {
        effect = 1;
    }
    damage = 50 * (c/d) * damage;
    return damage;
} 