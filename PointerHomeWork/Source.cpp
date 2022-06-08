#include<iostream>
using namespace std;


void FillRand(int* arr, const int n);
void Print(int* arr, const int n);


void main()
{
	setlocale(LC_ALL, "Russian");

	int value;
	cout << "Введите количество элементов массива: "; cin >> value;
	int* arr = new int[value];
	cout << "Наш массив: \n";
	FillRand(arr, value);
	Print(arr, value);
	cout << endl;
	int evenSize = 0;
	int oddSize = 0;

	for (int i = 0; i < value; i++)
	{
		if (arr[i] % 2 == 0)
		 evenSize++;
		else  oddSize++;
	}
	cout << "Количество четных элементов: " << evenSize << endl;
	cout << "Количество нечетных элементов: " << oddSize << endl;
	int* evenArr = new int[evenSize];
	int* oddArr = new int[oddSize];
	
		for (int i = 0, j = 0, k = 0; i < value; i++)
		{
			if (arr[i] % 2 == 0)

				evenArr[j++] = arr[i];
			else
				oddArr[k++] = arr[i];
		}
		cout << "Четные элементы массива:\n"; Print(evenArr, evenSize);
		cout << endl;
		cout << "Нечетные элементы массива:\n"; Print(oddArr, oddSize);

	delete[] evenArr;
	delete[] oddArr;
	delete[] arr;
}
void FillRand(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

