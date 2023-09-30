#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Alphabet1();
void Alphabet2();
void Alphabet3();
void Alphabet4();
void Alphabet5();
void Alphabet6();
main()
{
	system("cls");
	Alphabet1();
	Alphabet2();
	Alphabet3();
	Alphabet4();
	Alphabet5();
	Alphabet6();
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void Alphabet1()
{	
	gotoxy(15,15);
	cout << "H";
}
void Alphabet2()
{	gotoxy(15,16);
	cout << "A";
}
void Alphabet3()
{
	gotoxy(15,17);
	cout << "S";
}
void Alphabet4()
{
     gotoxy(15,18);  
      cout << "S";
}
void Alphabet5()
{	
	gotoxy(15,19);
	cout << "A";
}
void Alphabet6()
{	
	gotoxy(15,20);
	cout << "N";
}