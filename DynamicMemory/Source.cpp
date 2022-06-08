#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[], int& n, int value);
int* pop_front(int arr[], int& n, int value);
int* insert(int arr[], int& n, int value, int& index);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int& index);

void main()
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	cout << "������� ���������� ��������� �������: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	cout << "��� ������: " << endl;
	Print(arr, n);
	cout << endl;
	int value = 0;
	cout << "������� ���������� ��������: "; cin >> value;
	cout << endl;
	cout << "��� ������ � ����������� �������� � �����: " << endl;
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << endl;
	cout << "������� ���������� ��������: "; cin >> value;
	cout << "��� ������ � ����������� �������� � ������: " << endl;
	arr = pop_front(arr, n, value);
	Print(arr, n);
	cout << endl;
	int index = 0;
	cout << "������� ����� ������� �� �������� ����� �������� ������� � ������: "; cin >> index;
	cout << "������� ���������� ��������: "; cin >> value;
	cout << "��� ������ � ����������� �������� �� �������: " << endl;
	arr = insert(arr, n, value, index);
	Print(arr, n);
	cout << endl;
	cout << "��� ������ � ��������� ���������� ��������: " << endl;
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "��� ������ � ��������� ������� ��������: " << endl;
	arr = pop_front(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "������� ������ �� �������� �������� ������� �������:"; cin >> index;
	cout << "��� ������ � ��������� �������� �� �������: " << endl;
	arr = erase(arr, n, index);
	Print(arr, n);


	delete[] arr;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)

		cout << arr[i] << "\t";

}
int* push_back(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;

	arr[n] = value;
	n++;
	return arr;
}
int* pop_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	buffer[0] = value;
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}

	arr = buffer;
	n++;
	return arr;
	delete[] arr;

}
int* insert(int arr[], int& n, int value, int& index)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
		buffer[index] = value;
	}

	for (int i = index; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}

	arr = buffer;
	n++;
	return arr;
	delete[] arr;

}
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i - 1] = arr[i];
	}
	buffer = arr;
	n--;
	return arr;
	delete[] arr;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}

	arr = buffer;
	n--;
	return arr;
	delete[] arr;
}
int* erase(int arr[], int& n, int& index)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];

	}

	for (int i = index; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}

	arr = buffer;
	n--;
	return arr;
	delete[] arr;

}