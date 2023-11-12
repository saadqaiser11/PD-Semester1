#include <iostream>
using namespace std;
bool identical(string element[], int num);
main()
{
    int num;
    cout << "Enter the size of Array: ";
    cin >> num;
    string element[num];
    for(int x=0; x<num; x++)
    {
        cout << "Enter Element " << x+1 <<": ";
        cin >> element[x];
    }
    cout << identical(element, num);
}
bool identical(string element[], int num)
{
    bool value = false;
    string word=element[0];
    int x=0;
    int y=0;
    for(y; y<num; y++)
    {
        if(word==element[y])
        {
            x++;
        }
    }
    if(y==x)
        value = true;
    return value;
}