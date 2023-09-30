#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{	system("cls");
	name();	
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void name()
{
	int x=10, y=10;
	gotoxy(10,10);
	cout << "Saad Qaiser";
	gotoxy(20,20);
}