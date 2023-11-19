#include <iostream>
using namespace std;
int spec(int num, int arr[]);
main()
{
    int num;
    cout << "Enter the length of the array: ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < num; x++)
    {
        cin >> arr[x];
    }
    cout << "Special value: " << spec(num, arr);
}
int spec(int num, int arr[])
{
    int count = 0;
    for (int x = 0; x <= num; x++)
    {
        for (int y = 0; y < num; y++)
        {
            if (arr[y] >= x)
            {
                count++;
            }
        }
        if (count == x)
        {
            return x;
        }
        count = 0;
    }
    return -1;
}