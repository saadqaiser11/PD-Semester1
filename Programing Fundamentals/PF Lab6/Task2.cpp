#include <iostream>
using namespace std;
int parityAnalysis(int number);
main()
{
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    bool result = parityAnalysis(number);
    cout << result;
}
int parityAnalysis(int number)
{
    int mod1,mod2,mod3,div1,div2,div3,res;
	mod1=number%100;
	mod2=mod1%10;
	div1=number/100;
	div2=mod1/10;
	div3=mod2;
    res=div1+div2+div3;
    if (number%2==0)
    {
        if (res%2==0)
        {
            return true;
        }
    }
    if (number%2==1)
    {
        if (res%2==1)
        {
            return false;
        }
    }
}