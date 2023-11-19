#include<iostream>
using namespace std;
main()
{
    int days;
    int count=0;
    cout << "Enter the number of Saturdays: ";
    cin >> days;
    int total[days];
    for(int x=0;x<days;x++)
    {
        cout<<"Enter miles run for Saturday "<<x+1<<": ";
        cin>>total[x];
        if(total[x]>total[x-1])
    {
        count++;
    }
    }
    cout << "Total progress days: "<<count;
}
