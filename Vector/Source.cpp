#include<iostream>
#include<vector>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cout << "������� ���������� ��������� �������: "; cin >> n;
	vector<int> vecArr(n);
	cout << "��� ������: " << endl;
	for (int i = 0; i < n; i++)
	{
		vecArr[i] = rand() % 100;
		cout << vecArr[i] << "\t";
	}
	cout << endl;
	cout << "��� ������ � ����������� �������� � �����: " << endl;
	vecArr.push_back(111);
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\t";
	}
	cout << endl;
	vecArr.insert(vecArr.begin(), 123);
	cout << "��� ������ � ����������� �������� � ������: " << endl;
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\t";
	}
	cout << endl;
	cout << "��� ������ � ��������� ���������� ��������: " << endl;
	vecArr.pop_back();
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\t";
	}


}