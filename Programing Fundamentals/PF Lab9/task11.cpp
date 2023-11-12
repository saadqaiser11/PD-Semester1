#include <iostream>
using namespace std;
void vow(string sent);
main()
{
    string sent;
    cout << "Enter a string: ";
    getline(cin, sent);
    cout << "String with vowels removed: "; vow(sent);
}

void vow(string sent)
{
    int num=0;
    int ascii;
    while(sent[num]!='\0')
    {
        ascii=sent[num];
        if(ascii==65 ||  ascii==69 || ascii==73 || ascii==79 || ascii==85 || ascii==97 || ascii==101 || ascii==105 || ascii==111 || ascii==117)
        {
        }
        else
        {
            cout << char(ascii);
        }       
        num++;
    }
}