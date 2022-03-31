#include <iostream>
#include <Windows.h>

using namespace std;

void SetCursorPosition(int x, int y, int c);

int main()
{
	SetCursorPosition(7, 5, 12);
    system("pause >> NUL");
}


void SetCursorPosition(int x, int y, int c)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(h, position);
	SetConsoleTextAttribute(h, c);
	cout << char(3) << "\n";
}
