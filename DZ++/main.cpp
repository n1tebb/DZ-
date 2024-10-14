#include <iostream>
#include <Windows.h>

//Задание 1
void createarr(int n)
{
	const int rows = 2;
	const int cols = 2;

	int arr[rows][cols];

	for (int i = 0; i < cols; i++)
	{
		if (i == 0)
		{
			arr[0][i] = n;
		}
		else
		{
			arr[0][i] = arr[0][i - 1] * 2;
		}
	}

	for (int i = 0; i < cols; i++)
	{
		arr[1][i] = arr[0][i] + 1;
	}

	std::cout << "созданный массив: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) 
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	std::cout << "Введите число: ";
	std::cin >> n;
	
	createarr(n);

	return 0;
}

//Задание 2
void createarr(int n)
{
	const int rows = 2;
	const int cols = 2;

	int arr[rows][cols];

	for (int i = 0; i < cols; i++)
	{
		if (i == 0)
		{
			arr[0][i] = n;
		}
		else
		{
			arr[0][i] = arr[0][i - 1] + 1;
		}
	}

	for (int i = 0; i < cols; i++)
	{
		arr[1][i] = arr[0][i] + 1;
	}

	std::cout << "созданный массив: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	std::cout << "Введите число: ";
	std::cin >> n;

	createarr(n);

	return 0;
}