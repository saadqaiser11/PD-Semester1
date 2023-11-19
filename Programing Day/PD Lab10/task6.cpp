#include <iostream>
using namespace std;
void reverseWord(string sentence);
main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    cout << "Reversed string: "; reverseWord(sentence);
}
void reverseWord(string sentence)
{
    int x=0,y=0;
    string word="";
    string array[100];
    while(sentence[x]!='\0')
    {
        if(sentence[x] !=' ')
        {
            word+=sentence[x];
        }
        else
        {
            array[y]=word;
            y++;
            word="";
        }
        x++;
    }
    array[y] = word;
    for(int x=y; x>=0; x--)
    {
        if(x==0)
        {
            cout << array[x];
        }
        else
        {
        cout << array[x] << " ";
        }
    }
}