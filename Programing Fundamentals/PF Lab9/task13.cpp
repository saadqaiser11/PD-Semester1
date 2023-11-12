#include <iostream>
using namespace std;
void jazzifyChords(string chords[], int num);
main()
{
    int num;
    cout << "Enter the number of chords: ";
    cin >> num;
    string chords[num];
    cout << "Enter " << num<< " chords, one per line: " << endl;
    for(int x=0; x<num ; x++)
    {
        cin >> chords[x];
    }
    jazzifyChords(chords, num);
}
void jazzifyChords(string chords[], int num)
{
    cout << "Jazzified chords: [";
    int x=0;
    for(int i=0;i<num ; i++)
    {
        string word=chords[i];
        while( word[x]!='\0')
        {
            x++;
        }
        if( word[x-1]=='7')
        cout << word;
        else
        cout << word << "7" ;
        if(i!=num-1)
            cout << ", ";
        else
        {

        }
    }
    cout <<"]";
}