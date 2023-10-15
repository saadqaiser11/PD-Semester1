#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printEnemy1();
void eraseEnemy1();
void printEnemy2();
void eraseEnemy2();
void printEnemy3();
void eraseEnemy3();
void printEnemy4();
void eraseEnemy4();
void printPlayer();
void erasePlayer();
void moveLeft();
void moveRight();
void moveUp();
void moveDown();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void moveEnemy4();
void printMaze();
char getCharAtxy(short int x, short int y);
int eX1 = 2, eY1 = 2;
int eX2 = 40, eY2 = 2;
int eX3 = 2, eY3 = 20;
int eX4 = 40, eY4 = 20;
int pX = 20, pY = 30;
main()
{
	system("cls");
	printMaze();
	printEnemy1();
	printEnemy2();
	printEnemy3();
	printEnemy4();
	printPlayer();
	while(true)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			moveLeft();
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			moveRight();
		}
		if (GetAsyncKeyState(VK_UP))
		{
			moveUp();
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			moveDown();
		}
	moveEnemy1();
	moveEnemy2();
	moveEnemy3();
	moveEnemy4();
	Sleep(200);
	}
}
void printEnemy1()
{
	gotoxy(eX1,eY1);
	cout << "     (Enemy1)   ";
	gotoxy(eX1,eY1+1);
	cout << "      @@@@@     ";
	gotoxy(eX1,eY1+2);
	cout << "  | | (o  o) | |";
	gotoxy(eX1,eY1+3);
	cout << "  |_|        |_|";
	gotoxy(eX1,eY1+4);
	cout << "    |__| |__|   ";
}
void printEnemy2()
{
	gotoxy(eX2,eY2);
	cout << "     (Enemy2)   ";
	gotoxy(eX2,eY2+1);
	cout << "      @@@@@     ";
	gotoxy(eX2,eY2+2);
	cout << "  | | (o  o) | |";
	gotoxy(eX2,eY2+3);
	cout << "  |_|        |_|";
	gotoxy(eX2,eY2+4);
	cout << "    |__| |__|   ";
}
void eraseEnemy1()
{
	gotoxy(eX1,eY1);
	cout << "                ";
	gotoxy(eX1,eY1+1);
	cout << "                ";
	gotoxy(eX1,eY1+2);
	cout << "                ";
	gotoxy(eX1,eY1+3);
	cout << "                ";
	gotoxy(eX1,eY1+4);
	cout << "                ";
}
void eraseEnemy2()
{
	gotoxy(eX2,eY2);
	cout << "                ";
	gotoxy(eX2,eY2+1);
	cout << "                ";
	gotoxy(eX2,eY2+2);
	cout << "                ";
	gotoxy(eX2,eY2+3);
	cout << "                ";
	gotoxy(eX2,eY2+4);
	cout << "                ";
}void printEnemy3()
{
	gotoxy(eX3,eY3);
	cout << "     (Enemy3)   ";
	gotoxy(eX3,eY3+1);
	cout << "      @@@@@     ";
	gotoxy(eX3,eY3+2);
	cout << "  | | (o  o) | |";
	gotoxy(eX3,eY3+3);
	cout << "  |_|        |_|";
	gotoxy(eX3,eY3+4);
	cout << "    |__| |__|   ";
}
void printEnemy4()
{
	gotoxy(eX4,eY4);
	cout << "     (Enemy4)   ";
	gotoxy(eX4,eY4+1);
	cout << "      @@@@@     ";
	gotoxy(eX4,eY4+2);
	cout << "  | | (o  o) | |";
	gotoxy(eX4,eY4+3);
	cout << "  |_|        |_|";
	gotoxy(eX4,eY4+4);
	cout << "    |__| |__|   ";
}
void eraseEnemy3()
{
	gotoxy(eX3,eY3);
	cout << "                ";
	gotoxy(eX3,eY3+1);
	cout << "                ";
	gotoxy(eX3,eY3+2);
	cout << "                ";
	gotoxy(eX3,eY3+3);
	cout << "                ";
	gotoxy(eX3,eY3+4);
	cout << "                ";
}
void eraseEnemy4()
{
	gotoxy(eX4,eY4);
	cout << "                ";
	gotoxy(eX4,eY4+1);
	cout << "                ";
	gotoxy(eX4,eY4+2);
	cout << "                ";
	gotoxy(eX4,eY4+3);
	cout << "                ";
	gotoxy(eX4,eY4+4);
	cout << "                ";
}
void moveEnemy1()
{   
	eraseEnemy1();
	eY1 = eY1 + 1;
	if (eY1==19)
	{
		eY1 = 2;
	}
	printEnemy1();
}
void moveEnemy2()
{   
	eraseEnemy2();
	eY2 = eY2 + 1;
	if (eY2==19)
	{
		eY2 = 2;
	}
	printEnemy2();
}
void moveEnemy3()
{   
	eraseEnemy3();
	eY3 = eY3 + 1;
	if (eY3==30)
	{
		eY3 = 20;
	}
	printEnemy3();
}
void moveEnemy4()
{   
	eraseEnemy4();
	eY4 = eY4 + 1;
	if (eY4==30)
	{
		eY4 = 20;
	}
	printEnemy4();
}
void printMaze()
{
	cout << "#############################################################" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#                                                           #" << endl;
	cout << "#############################################################" << endl;
}
void printPlayer()
{
	gotoxy(pX,pY);
	cout << "     (HERO)     ";
	gotoxy(pX,pY+1);
	cout << "     @@@@@      ";
	gotoxy(pX,pY+2);
	cout << " | | (o  o) | | ";
	gotoxy(pX,pY+3);
	cout << " |_|        |_| ";
	gotoxy(pX,pY+4);
	cout << "   |__| |__|    ";
}
void erasePlayer()
{
	gotoxy(pX,pY);
	cout << "                ";
	gotoxy(pX,pY+1);
	cout << "                ";
	gotoxy(pX,pY+2);
	cout << "                ";
	gotoxy(pX,pY+3);
	cout << "                ";
	gotoxy(pX,pY+4);
	cout << "                ";
	gotoxy(pX,pY+5);
	cout << "              	 ";
	gotoxy(pX,pY+6);
	cout << "                ";
}
void moveLeft()
{
	if (getCharAtxy(pX - 1, pY) == ' ')
	{
		erasePlayer();
		pX = pX-1;
		printPlayer();
	}
}
void moveRight()
{
	if (getCharAtxy(pX + 16, pY) == ' ')
	{
		erasePlayer();
		pX = pX+1;
		printPlayer();
	}
}
void moveDown()
{
	if (getCharAtxy(pX, pY+1) == ' ')
	{
		erasePlayer();
		pY = pY+1;
		printPlayer();
	}
}
void moveUp()
{
	if (getCharAtxy(pX, pY-1) == ' ')
	{
		erasePlayer();
		pY = pY-1;
		printPlayer();
	}
}
char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci,coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
                                                                                
   
