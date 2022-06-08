#include<iostream>
using namespace std;

template<typename T>
void FillRand(T arr[], const int n);
template<typename T>
void Print(T arr[], const int n);
template<typename T>
T* push_back(T arr[], int& n, int value);
template<typename T>
T* pop_front(T arr[], int& n, int value);
template<typename T>
T* insert(T arr[], int& n, int value, int& index);
template<typename T>
T* pop_back(T arr[], int& n);
template<typename T>
T* pop_front(T arr[], int& n); 
template<typename T>
T* erase(T arr[], int& n, int& index);

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
template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)

		cout << arr[i] << "\t";

}
template<typename T>
T* push_back(T arr[], int& n, int value)
{
	T* buffer = new int[n + 1];
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
template<typename T>
T* pop_front(T arr[], int& n, int value)
{
	T* buffer = new int[n + 1];
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
template<typename T>
T* insert(T arr[], int& n, int value, int& index)
{
	T* buffer = new int[n + 1];
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
template<typename T>
T* pop_back(T arr[], int& n)
{
	T* buffer = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i - 1] = arr[i];
	}
	buffer = arr;
	n--;
	return arr;
	delete[] arr;
}
template<typename T>
T* pop_front(T arr[], int& n)
{
	T* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}

	arr = buffer;
	n--;
	return arr;
	delete[] arr;
}
template<typename T>
T* erase(T arr[], int& n, int& index)
{
	T* buffer = new int[n + 1];
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