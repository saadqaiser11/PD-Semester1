#include <iostream>
using namespace std;
int coloringTime(string color[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string color[size];
    for(int x=0; x<size; x++)
    {
        cout << "Enter Element "<< x+1 << ": ";
        cin >> color[x];
    }
    cout << "Time to color: " << coloringTime(color,size) <<" seconds";
}
int coloringTime(string color[], int size)
{
    int time=0;
    string check=color[0];
    for(int x=0; x<size; x++)
    {   
         if(color[x]==check)
         {
            time=time+2;
         }
         else
         {
            time=time+3;
         }
         check=color[x];
    }
    return time;
}