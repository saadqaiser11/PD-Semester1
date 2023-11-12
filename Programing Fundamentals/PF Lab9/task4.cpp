#include <iostream>
using namespace std;
void rev_Arr(int list[], int num);
main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    if (num <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
    }
    int list[num];
    cout << "Enter " << num << " numbers, one per line: " << endl;
    for(int x=0; x<num ; x++)
    {
        cin >> list[x];
    }
    cout << "Numbers in reverse order: ";
    rev_Arr( list, num);
}
void rev_Arr(int list[], int num)
{
    for(int x=num-1; x>=0 ; x--)
    {
        cout << list[x] <<" ";
    }
    cout << endl;
}