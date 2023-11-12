#include <iostream>
using namespace std;
bool check(string word);
main()
{
    string word;
    cout << "Enter a String: ";
    cin >> word;
    cout<< check(word);
}
bool check(string word)
{
    bool value=false;
    int count=0;
    for (int x=0;word[x]!='\0';x++)
    {
        count++;
    }
    if(count%2==0)
        value=true;
    return value;
}