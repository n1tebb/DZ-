#include <iostream>
#include <Windows.h>

//пузырчатая/Пузырьковая сортировка
void bubbleSort(int arr[], int n)
{
	std::cout << "Пузырьковая сортировка\n";
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//Сортировка выбором
void selectSort(int arr[], int n) {
	std::cout << "\nСортировка выбором\n";
	for (int i = 0; i < n - 1; ++i) {
		int minIndex = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

//Быстрая сортировка
void quickSort(int arr[], int left, int right) {
	if (left < right) {
		int vraa = arr[right];
		int i = left - 1;

		for (int j = left; j < right; ++j) {
			if (arr[j] < vraa) {
				++i;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		int temp = arr[i + 1];
		arr[i + 1] = arr[right];
		arr[right] = temp;

		int vraaIndex = i + 1;

		quickSort(arr, left, vraaIndex - 1);
		quickSort(arr, vraaIndex + 1, right);
	}
}

//вывод массива
void printArr(const int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr1[7] = {64, 34, 25, 12, 22, 11, 90};
	int arr2[7] = {38, 27, 43, 3, 9, 82, 10};
	int arr3[7] = {5, 8, 6, 1, 3, 7, 2};

	int n1 = 7;
	int n2 = 7;
	int n3 = 7;

	// Пузырьковая сортировка
	bubbleSort(arr1, n1);
	std::cout << "Отсортированный массив: ";
	printArr(arr1, n1);

	// Сортировка выбором
	selectSort(arr2, n2);
	std::cout << "Отсортированный массив: ";
	printArr(arr2, n2);

	// Быстрая сортировка
	std::cout << "\nБыстрая сортировка\n";
	quickSort(arr3, 0, n3 - 1);
	std::cout << "Отсортированный массив: ";
	printArr(arr3, n3);

	return 0;
}