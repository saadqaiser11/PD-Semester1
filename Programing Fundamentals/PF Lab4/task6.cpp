#include <iostream>
using namespace std;
void Result(int run);
main()
{
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	Result(score);
}
void Result(int run)
{
	if (run>50)
	{
		cout<<"Pass";
	}
	if (run<=50)
	{
		cout<<"Fail";
	}
}