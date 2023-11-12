#include <iostream>
using namespace std;
void evenOddTransform(int array[], int num, int time);
main()
{
    int num;
    cout << "Enter the size of Array: ";
    cin >> num;
    int array[num];
    for(int x=0; x<num; x++)
    {
        cout << "Enter Element " << x+1 << ": ";
        cin >> array[x];
    }
    int time;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> time;
    evenOddTransform(array, num,time);
}
void evenOddTransform(int array[], int num, int time)
{
    cout << "[";
    for(int x=0; x<num ; x++)
    {
        if(array[x]%2==0)
        {
            for(int i=0; i<time; i++)
            {
                array[x]=array[x]-2;
            }
        }
        else if(array[x]%2!=0)
        {
            for(int i=0; i<time; i++)
            {
                array[x]=array[x]+2;
            }
        }
        cout << array[x];
        if(x!=num-1)
        {
            cout << ", ";
        }
        else
        {
        
        }
    }
    cout <<"]";
}