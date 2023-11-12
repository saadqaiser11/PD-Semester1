#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
main()
{
    int num;
    cout << "Enter the size of the array: ";
    cin >> num;
    int arr[num];
    cout << "Enter " << num << " elements of the array: " << endl;
    for(int x=0; x<num ; x++)
    {
        cin >> arr[x];
    }
    if(isSpecialArray(arr, num))
        cout << "The array is special";
    else
        cout << "The array is not special";
}
bool isSpecialArray(int arr[], int size)
{
    bool check1=false;
    bool check2=false;
    bool value=true;
    for(int x=0; x<size ; x+=2)
    {
        if(arr[x]%2!=0)
            check1=true;
        else
        {
            check1=false;
            break;
        }
    }
    for(int x=1; x<size ; x+=2)
    {
        if(arr[x]%2==0)
            check2=true;
        else
        {
            check2=false;
            break;
        }
    }
    if(check1 & check2== true)
    {
        value = false;
    }
    return value;
}