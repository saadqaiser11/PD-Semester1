#include<iostream>
using namespace std;
bool isRepeatingCycle(int num,int arr[],int cycle);
main()
{
    int num;
    cout << "Enter the length of the array: ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements of the array:"<<endl;
    for(int x=0;x<num;x++)
    {
        cin >> arr[x];
    }
    int cycle;
    cout << "Enter the length of the cycle: ";
    cin >> cycle;
    cout << "Ouput: "<<isRepeatingCycle;
}
bool isRepeatingCycle(int num,int arr[],int cycle)
{
    bool result=false;
    int check=arr[num];
    if (cycle>num)
    {
        result=true;
    }
    else
    {
        int count=0;
        for(int x=1;arr[x]==arr[x + cycle];x++)
        {
            count++;
        }
        if(count==cycle)
        result=true;
    }
    return result;
}