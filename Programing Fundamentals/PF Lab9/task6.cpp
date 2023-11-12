#include <iostream>
using namespace std;
int largestNum(int list[], int num);
main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    int list[num];
    cout << "Enter " << num << " numbers, one per line: " << endl;
    for(int x=0; x<num ; x++)
    {
        cin >> list[x];
    }    
    cout << "The largest number entered is: " << largestNum( list, num);
}
int largestNum(int list[], int num)
{
    int x=0;
    int large=list[x];
    for(x; x<num; x++)
    {
        int number=list[x];
        if(large>=number)
            large=large;
        else
            large=number;
    }
    return large;
}