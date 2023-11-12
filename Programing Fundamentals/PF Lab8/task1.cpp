#include <iostream>
using namespace std;
bool doesBrickFit(int a, int b, int c, int w, int h);
int main() 
{
    int a,b,c,w,h;
    cout << "Enter height: ";
    cin >> a;
    cout << "Enter width: ";
    cin >> b;
    cout << "Enter depth: ";
    cin >> c;
    cout << "Enter hole width: ";
    cin >> w;
    cout << "Enter hole hieght: ";
    cin >> h;
    cout << doesBrickFit(a,b,c,w,h);
}
bool doesBrickFit(int a, int b, int c, int w, int h) 
{
    if ((a <= w && b <= h) || (a <= h && b <= w) || (a <= w && c <= h) || (a <= h && c <= w) || (b <= w && c <= h) || (b <= h && c <= w)) 
    {
        return true;
    }
    return false;
}