#include<iostream>
using namespace std;
main()
{
    int box;
    cout << "Enter the number of boxes: ";
    cin >> box;
    int volume=0,product=1;
    int dim[box];
    cout << "Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int x=0;x<box*3;x++)
    {
        cin>>dim[x];
    }
    for(int x=0;x<(box*3);x++)
    {
        product *= dim[x];
        if((x+1)%3==0)
        {
            volume+=product;
            product=1;
        }
    }
    cout<<"Total volume of all boxes: "<<volume;
}