#include <iostream>
#include "Services.h"
#include "DynamicArray.h"

using namespace std;

void Menu()
{
	cout << "������� ����� �������:" << endl;
	cout << "1. ����� �������" << endl;
	cout << "2. ���������� �������" << endl;
	cout << "3. ���������� �������� � ������" << endl;
	cout << "4. �������� �������� �� �������" << endl;
	cout << "5. ������� �������� � ������ �������" << endl;
	cout << "6. ������� ����� ������������ ��������" << endl;
	cout << "7. �������� ����� �������� � �������" << endl;
	cout << "8. �������� ����� �������� � �������" << endl;
	cout << "9. �������� ������" << endl << endl;
}

void CoutDynamicArray(DynamicArray* arrayInfo)
{
	if (arrayInfo->Length != 0)
	{
		cout << "��� ������:" << endl;
		for (int i = 0; i < arrayInfo->Length; i++)
		{
			cout << arrayInfo->Array[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "������ ������" << endl;
	}
	cout << endl;
}

void CheckIndex(DynamicArray* arrayInfo, int index, int element)
{
	if (arrayInfo->Array[index] != element)
	{
		cout << "������� �� ������" << endl << endl;
	}
	else
	{
		cout << "������� ������ ��� �������� " << index << endl << endl;
	}
}

int TryInput()
{
	int element;
	cin >> element;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "������� ������������ ��������" << endl;
		cout << "���������� ��� ���: ";
		cin >> element;
	}

	return element;
}