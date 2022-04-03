//1.Написать функцию Rectangle, которая выводит на экран прямоугольник. 
// Функция принимает такие параметры: ширина, высота, символ рамки, символ заливки, цвет рамки, цвет заливки.

#include <iostream>
#include <windows.h>
using namespace std;

int Rectangle(int x, int y, char sign1, char sign2, int color1, int color2);

int main()
{
    Rectangle(5, 10, '@', '#', 12, 10);
    system("pause >> NUL");
}
int Rectangle(int x, int y, char sign1, char sign2, int color1, int color2)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
            {
                SetConsoleTextAttribute(h, color1);
                cout << sign1;
            }
            else
            {
                SetConsoleTextAttribute(h, color2);
                cout << sign2;
            }
        }
        cout << endl;
    }
    return 0;
}
