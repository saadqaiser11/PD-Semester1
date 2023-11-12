#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
    string correctPhrase;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    string actualTyped;
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);
    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{
    int x=0;
    string result;
    while(correctPhrase[x]!='\0')
    {
        bool value=false;
        if(correctPhrase[x]!=actualTyped[x])
        {           
            int i=0;
            while(result[i]!='\0')
            {
                if(result[i]==correctPhrase[x])
                {
                    value=true;
                }
                i++;
            }
            if(value==false)
            {
            result += correctPhrase[x];
            }            
        }
        x++;
    }
    return result;
}