//4. Написать функцию, показывающую на экран минимум и максимум (значение и индекс) среди элементов передаваемого ей массива.

#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void IndexMeaning(int array[], const int X);

int main()
{
	system("chcp 1251 > 0");

	srand(time(0));
	int array[50];
	for (int i = 0; i < 50; i++)
	array[i] = rand() % 50;

	IndexMeaning(array, 50);

}
void IndexMeaning(int array[], const int X)
{

	int max = array[0];
	int min = array[0];
	int min_1, max_1;

	for (int i = 0; i < X; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			max_1 = i;
		}
		if (array[i] < min)
		{
			min = array[i];
			min_1 = i;
		}
	}
	cout << "Максимальный элемент массива = " << max << " индекс : " << max_1 << "\n";
	cout << "Минимальный элемент массива = " << min << " индекс : " << min_1 << "\n";
}
