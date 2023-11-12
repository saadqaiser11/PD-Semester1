#include <iostream>
using namespace std;
void Reverse(string word);
main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    cout <<"Reversed String: "; 
    Reverse(word);
}
void Reverse(string word)
{
    int count=0;
    while(word[count]!='\0')
    {
        count++;
    }
    for(int x=count-1; x>=0; x--)
    {
       cout << word[x];
    }
}