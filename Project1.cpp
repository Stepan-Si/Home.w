// Задание 1.

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

// Задание 2.

#include <iostream>
#include <Windows.h>

using namespace std;

void Line(int x, char sign, int color, bool line);

int main()
{
    Line(20, '@', 12, false);

    system("pause >> NUL");
}
void Line(int x, char sign, int color, bool line)
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
    if (line)
        for (int i = 0; i < x; i++)
            cout << sign;
    else
        for (int j = 0; j < x; j++)
            cout << sign << "\n";
}
