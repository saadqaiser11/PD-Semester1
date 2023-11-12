#include <iostream>
using namespace std;
void Next(string word);
main()
{
    string word;
    cout << "Enter a String: ";
    getline (cin,word);
    cout << "Shifted String: ";
    Next(word);
}
void Next(string word)
{
    int x=0,asc,next_asc;
    char value;
    while(word[x]!='\0')
    {        
        if(word[x]=='Z')
        {
            word[x]='@';
        }
        if(word[x]=='z')
        {
            word[x]='`';
        }
        asc=word[x];
        next_asc=asc+1;
        if(next_asc==33)
        {
            next_asc=32;
        }
        cout << char(next_asc);
        x++;
    }
}