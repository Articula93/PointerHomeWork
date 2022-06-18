#include<iostream>
#include<vector>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cout << "Введите количество элементов массива: "; cin >> n;
	vector<int> vecArr(n);
	cout << "Наш массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		vecArr[i] = rand() % 100;
		cout << vecArr[i] << "\t";
	}
	cout << endl;
	cout << "Наш массив с добавлением элемента в конец: " << endl;
	vecArr.push_back(111);
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\t";
	}
	cout << endl;
	vecArr.insert(vecArr.begin(), 123);
	cout << "Наш Массив с добавлением элемента в начало: " << endl;
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\t";
	}
	cout << endl;
	cout << "Наш массив с удалением последнего элемента: " << endl;
	vecArr.pop_back();
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\t";
	}


}