//5. Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.

#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void Сonvers(int array[], const int D);

int main()
{
	system("chcp 1251 > 0");

	int array[10];
	for (int i = 0; i < 10; i++)
		array[i] = rand() % 10;
	for (int i = 0; i < 10; i++)
		cout << array[i] << "\t"; cout << ">>>";
	cout << "\n\n";
	Сonvers(array, 10);
	for (int i = 0; i < 10; i++)
		cout << array[i] << "\t"; cout << "<<<";
	cout << "\n\n";

}
void Сonvers(int array[], const int D)
{

	for (int i = 0; i < D / 2; i++) 
	{
		swap(array[i], array[D - 1 - i]); // Функция "swap" - свапает значения ( меняет местами )
	}
}
