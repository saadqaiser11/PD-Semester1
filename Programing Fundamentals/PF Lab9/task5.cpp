#include <iostream>
using namespace std;
void uniqueNum(int list[],int x);
bool isAlreadyEntered(int list[], int x, int n);
main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    cout << "Enter " << num << " numbers, one per line: " << endl;
    int list[num];
    int number;
    for(int x=0; x<num; x++)
    {   
        cin >> list[x];
        isAlreadyEntered(list, x, number);
        if(isAlreadyEntered(list, x, number))
        {
            cout << "Already Entered: " << list[x] << endl;
        }
        number=list[x];
    }
    uniqueNum(list, num);
}
bool isAlreadyEntered(int list[], int number, int num)
{
    bool value=false;
    if(list[number]==num)    
        value=true;
    return value;
}
void uniqueNum(int list[],int num)
{
    int number;
    cout << "Unique numbers entered: ";
    for(int x=0; x<num ; x++)
    {
        if(isAlreadyEntered(list, x, number)==0)
        { 
            cout << list[x] << " ";
        }
        number=list[x];
    }
}