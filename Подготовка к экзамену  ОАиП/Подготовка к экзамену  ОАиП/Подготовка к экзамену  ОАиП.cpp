// Подготовка к экзамену  ОАиП.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream> 
#include<stdio.h> 
#include <math.h> 
#include <conio.h> 
#include <ctime> 
using namespace std;




int main()
{
	double rez, max;
	int a, b, n, m, i, j, k, g, jm, im;
	cout << "Input a: \n";
	cin >> a;
	int rows = a;
	int cols = rows;
	srand(time(0));
	int** arr = new int* [rows]; /*создание массива указателей*/
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[rows]; /*создание массива элементов*/
	}
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = 0 + rand() % 11 - 5;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	rez = 0;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			if (arr[i][rows - 1 - i] != 0)
			{
				arr[i][rows - 1 - i] = 0;

			}
			if (arr[i][j] < 0)
			rez += arr[i][j];
		}
	cout << endl << rez;
	max = arr[0][0];
	im = jm = 0;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			if (arr[i][j] > max) {
				max = arr[i][j];
				im = i;
				jm = j;
				cout << endl << arr[i][j] << endl;
			}
	
	swap(arr[im][jm], arr[rows - 1][cols - 1]);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

		for (int i = 0; i < rows; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
	}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
