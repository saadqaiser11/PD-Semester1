#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);
main()
{
    int firstArraySize, secondArraySize;
    cout << "Enter the number of elements in the first array (must be 2): ";
    cin >> firstArraySize;
    cout << "Enter " << firstArraySize << " elements for the first array, one per line: "<< endl;
    int firstArray[firstArraySize];
    for(int i=0; i<firstArraySize ; i++)
    {
        cin >> firstArray[i];
    }
    cout << "Enter the number of elements for the second array: ";
    cin >> secondArraySize;
    cout << "Enter " << secondArraySize << " elements for the second array, one per line: "<< endl;
    int secondArray[secondArraySize];
    for(int i=0; i<secondArraySize ; i++)
    {
        cin >> secondArray[i];
    }
    insertArrayInMiddle( firstArray, firstArraySize, secondArray, secondArraySize);
}
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
    cout << "Resulting array: [";
    cout << firstArray[0] << ", ";
    for(int i=0; i<secondArraySize; i++)
    {
        cout << secondArray[i] << ", ";
    }
        cout << firstArray[1];    
    cout << "]";
}