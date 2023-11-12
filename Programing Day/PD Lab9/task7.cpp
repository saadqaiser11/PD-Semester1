#include <iostream>
using namespace std;
void convertPINToDance(string code);
main()
{
    string code;
    cout << "Enter your PIN (4 digits): ";
    cin >> code;
    convertPINToDance(code);
}
void convertPINToDance(string code)
{
    string result=" ";
    int x=0;
    int n=0;
    int count=0;
    string moves[10];
    moves[0]="Shimmy";
    moves[1]="Shake";
    moves[2]="Pirouette";
    moves[3]="Slide";
    moves[4]="Box Step";
    moves[5]="Headspin";
    moves[6]="Dosado";
    moves[7]="Pop";
    moves[8]="Lock";
    moves[9]="Arabesque";
    while(code[count]!='\0')
    {
        count++;
    }
    if(count!=4)
    {
        cout << "Invalid input.";
        return;
    }
    for(int i=0; i<count; i++)
    {
        if(!isdigit(code[i]))
        {
            cout << "Invalid input.";
            return;
        }
    }
    for(int i=0; i<count; i++)
    {
        x+=(code[i]-'0');
        if(x>9)
        {
            x-=10;
        }
        if(i==count-1)
        {
            result+=moves[x];
        }
        else
        {
        result +=moves[x]+", ";
        }
        x=n;
        x++;
        n++;
    }
    cout << result;
}