#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

void ShowSumAverageMinMax_array();
void ShowSumDiagonal_array();
void ShowPositiveNegativeEqual_array();
void ShowSumPillarLine_array();
void ShowNum_lineNum_Pillar_array();
void ShowOdd_EvenLine_array();

int main()
{
	system("chcp 1251 >0");
	srand(time(0));
	ShowSumAverageMinMax_array();
	cout << "\n\n";
	ShowSumDiagonal_array();
	cout << "\n\n";
	ShowPositiveNegativeEqual_array();
	cout << "\n\n";
	ShowSumPillarLine_array();
	cout << "\n\n";
	ShowNum_lineNum_Pillar_array();
	cout << "\n\n";
	ShowOdd_EvenLine_array();
	cout << "\n\n";




}

void ShowSumAverageMinMax_array()
{
	const int M = 4;
	const int N = 5;

	int array[M][N];
	int sum = 0;
	int average;
	int max = 0;
	int min = 20;

	srand(time(0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			array[i][j] = rand() % 21;
			sum = sum + array[i][j];
			if (array[i][j] > max) max = array[i][j];
			if (array[i][j] < min) min = array[i][j];
		}

	cout << "Массив: \n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << array[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nСумма элементов массива : " << sum << "\n";
	cout << "Cреднее арифметическое элементов массива : " << (double)sum / (M * N) << "\n";
	cout << "Минимальный элемент массива : " << min << "\n";
	cout << "Максимальный элемент массива : " << max << "\n";
}
void ShowSumDiagonal_array()
{
	const int M = 5;

	int array[M][M];
	int sum_1 = 0;
	int	sum_2 = 0;

	srand(time(0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
		{
			array[i][j] = rand() % 21;
			if (i == j) sum_1 = sum_1 + array[i][j];
			if (i + j == M - 1) sum_2 = sum_2 + array[i][j];
		}

	cout << "Массив : \n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			cout << array[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nСумма элементов, расположенных на главной диагонали: " << sum_1 << "\n";
	cout << "Сумма элементов, расположенных на побочной диагонали: " << sum_2 << "\n";
}
void ShowPositiveNegativeEqual_array()
{
	const int M = 9;
	const int N = 5;

	int array[M][N];
	int positive_x = 0;
	int negative_x = 0;
	int zero_x = 0;


	srand(time(0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			array[i][j] = rand() % 21 - 10;
			if (array[i][j] > 0) positive_x++;
			if (array[i][j] < 0) negative_x++;
			if (array[i][j] == 0) zero_x++;
		}

	cout << "Массив: \n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}

	cout << "\nКоличество положительных элементов : " << positive_x << "\n";
	cout << "Количество отрицательных элементов : " << negative_x << "\n";
	cout << "Количество элементов равных нулю : " << zero_x << "\n";

}
void ShowSumPillarLine_array()
{
	const int M = 9;
	const int N = 5;

	int array[M][N];

	srand(time(0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			array[i][j] = rand() % 21;

	cout << "Массив: \n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}

	cout << "\n\n";


	for (int i = 0; i < M; i++)
	{
		int sum = 0;
		for (int j = 0; j < N; j++)
			sum = sum + array[i][j];
		cout << "Сумма элементов " << i << "-й строки равна :" << sum << "\n";
	}

	cout << "\n\n";

	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++)
			sum = sum + array[j][i];
		cout << "Сумма элементов " << i << "-го столбца равна :" << sum << "\n";
	}

}
void ShowNum_lineNum_Pillar_array()
{
	const int M = 9;
	const int N = 5;

	int array[M][N];


	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			array[i][j] = i * 10 + j;

	cout << "Массив: \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%0.2d\t", array[i][j]);
		cout << endl;
	}
}
void ShowOdd_EvenLine_array()
{
	const int M = 8;
	const int N = 5;

	int array[M][N];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			array[i][j] = i * 10 + j;

	cout << "Массив:\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%0.2d\t", array[i][j]);
		cout << endl;
	}

	cout << "\n\n";

	int array_1[M][N];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			if (i % 2 == 0) array_1[i][j] = array[i + 1][j];
			if (i % 2 != 0) array_1[i][j] = array[i - 1][j];
		}

	cout << "Измененный массив:\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%0.2d\t", array_1[i][j]);

		cout << endl;
	}

}



