//3.Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.

#include <iostream>
#include <windows.h>
using namespace std;

void SumRange(int a, int b);

int main()
{
	system("chcp 1251 > 0");

    int x;
    int y;
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;

    SumRange(x, y);
    return 0;
}
void SumRange(int a, int b)
{
    int sum = 0;
    if (a < b)
    {
        int i = a + 1;
        while (i < b)
        {
            sum += i;
            i++;
        }
        cout << "\nСумма равна - " << sum << "\n\n";
    }
    else if (a > b)
    {
        int i = b + 1;
        while (i < a)
        {
            sum += i;
            i++;
        }
        cout << "Сумма равна - " << sum << "\n";
    }
    else
    {
        cout << "Сумма равна - " << sum << "\n";
    }
}
