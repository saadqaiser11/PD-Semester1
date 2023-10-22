#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int count,num;
    float n1 = 0,n2 = 0,n3 =0,n4 =0 ,n5 = 0;
    float p1,p2,p3,p4,p5;
    cout << "Enter numbers count: ";
    cin  >> count;
    for(int x = 1; x <= count;x++)
    {
        cout << "Enter a number: ";
        cin  >> num;
        if(num < 200)
            n1++;
        else if(num < 400)
            n2++;
        else if(num < 600)
            n3++;
        else if(num < 800)
            n4++;
        else 
            n5++;
    }
    float result = count;
    p1 = (n1/result)*100;
    p2 = (n2/result)*100;
    p3 = (n3/result)*100;
    p4 = (n4/result)*100;
    p5 = (n5/result)*100;
  
    cout << fixed << setprecision(2);
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;
    cout << p5 << endl;
}