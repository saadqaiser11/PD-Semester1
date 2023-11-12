#include <iostream>
using namespace std;
int common(string str1, string str2);
main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "Number of common characters: " << common(str1, str2);
}
int common(string str1, string str2)
{
    int count=0;
    int x1=0;
    int n=0;
    int x2=n;
    for(x1=0; str1[x1]!='\0'; x1++)
    {
        for(x2=n; str2[x2]!='\0'; x2++)
        {
            if(str1[x1]==str2[x2])
            {
                count++; 
                n++;
                break;
            }
        }       
    }
    return count;
}