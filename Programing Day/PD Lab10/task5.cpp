#include <iostream>
using namespace std;
main()
{
    int size = 10;
    int array[size];
    cout << "Enter the weights of the 10 packages: " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> array[x];
    }
    int mini = array[0];
    for (int x = 0; x < size; x++)
    {
        mini = array[x];
        for (int y = x; y < size; y++)
        {
            if (array[y] < mini)
            {
                mini = array[y];
                int newValue = array[x];
                array[x] = mini;
                array[y] = newValue;
            }
        }
    }
    cout << "Sorted array in ascending order: [";
    for (int x = 0; x < size; x++)
    {
        cout << array[x];
        if (x != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}