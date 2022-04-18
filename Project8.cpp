//Написать 3 шаблонные функции сортировки одномерных массивов любого типа.


#include <iostream>
using namespace std;

template <typename T>
void bubble(T* array, int size);

template <typename T>
void insert(T* array, int size);

template <typename T>
void choice(T* array, int size);

template <typename T>
void show(T* array, int size);

int main()
{
	double array1[10]{ 40.4, 25.3, 35.4, 10.1, 30.3, 20.2, 15.2, 45.5, 50.5, 60.1 };
	bubble(array1, 10);
	show(array1, 10);
	cout << "\n\n";

	int array2[10]{ 1 , 10, 3 ,5 , 2 , 7 , 8 , 6 , 9 ,4 };
	insert(array2, 10);
	show(array2, 10);
	cout << "\n\n";

	float array3[10]{ 1.1 , 5.1 ,4.1 , 10.1 , 3.1 , 9.1 , 7.1 , 6.1 , 8.1 , 2.1 };
	choice(array3, 10);
	show(array3, 10);
	cout << "\n\n";
}

template <typename T>
void bubble(T* array, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - 1 - i; j++)
			if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
}

template <typename T>
void insert(T* array, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j > 0; j--)
		{
			if (array[j] < array[j - 1]) swap(array[j], array[j - 1]);
			else break;
		}
}

template <typename T>
void choice(T* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int a = i;
		for (int j = i + 1; j < size; j++)
			if (array[a] > array[j]) a = j;
		swap(array[a], array[i]);
	}
}

template <typename T>
void show(T* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " |";
}
