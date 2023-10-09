#include<iostream>
using namespace std;
string IsSymmetrical(int num1);
main()
{
	int numb;
	string result;
	cout<<"Enter a three-digit number: ";
	cin>>numb;
	result = IsSymmetrical(numb);
	cout<<result<<endl;
	return 0;
}
string IsSymmetrical(int num1)
{
	int num2,num3,A,B,C;
	num2=num1%100;
	num3=num2%10;
	A=num1/100;
	B=num2/10;
	C=num3;
	if (A==C)
	{
	return "The number is symmetrical.";
	}
	if (A!=C)
	{
	return "The number is not symmetrical.";
	}

} 