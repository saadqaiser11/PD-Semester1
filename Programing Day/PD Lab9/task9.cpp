#include <iostream>
using namespace std;
string longest7segmentWord(string words[], int size);
main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    cout << "Enter the words, one by one: " << endl;;
    string words[size];
    for(int x=0; x<size; x++)
    {
        cin >> words[x];
    }
    cout << "Longest 7-segment word: " << longest7segmentWord(words, size);
}
string longest7segmentWord(string words[], int size)
{
    string result;
    int len=0;
    for(int x=0; x<size; x++)
    {
        bool check=false;
        string word=words[x];
        int i=0;
        int count=0;
        while(word[i]!='\0')
        {
            if(word[i]=='k' || word[i]=='m' || word[i]=='v' || word[i]=='w' || word[i]=='x')
            {
                check=true;
            }
            count++;
            i++;
        }
        if(check==false && count>len)
        {
            result=word;
            len=count;
        }
    }
    return result;
}