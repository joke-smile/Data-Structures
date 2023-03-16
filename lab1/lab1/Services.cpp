#include <iostream>
#include "Services.h"
#include "DynamicArray.h"

using namespace std;

void Menu()
{
	cout << "Введите номер задания:" << endl;
	cout << "1. Вывод массива" << endl;
	cout << "2. Сортировка массива" << endl;
	cout << "3. Добавление элемента в массив" << endl;
	cout << "4. Удаление элемента из массива" << endl;
	cout << "5. Вставка элемента в начало массива" << endl;
	cout << "6. Вставка после определённого элемента" << endl;
	cout << "7. Линейный поиск элемента в массиве" << endl;
	cout << "8. Бинарный поиск элемента в массиве" << endl;
	cout << "9. Очистить массив" << endl << endl;
}

void CoutDynamicArray(DynamicArray* arrayInfo)
{
	if (arrayInfo->Length != 0)
	{
		cout << "Ваш массив:" << endl;
		for (int i = 0; i < arrayInfo->Length; i++)
		{
			cout << arrayInfo->Array[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "Массив пустой" << endl;
	}
	cout << endl;
}

void CheckIndex(DynamicArray* arrayInfo, int index, int element)
{
	if (arrayInfo->Array[index] != element)
	{
		cout << "Элемент не найден" << endl << endl;
	}
	else
	{
		cout << "Элемент найден под индексом " << index << endl << endl;
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
		cout << "Введено некорректное значение" << endl;
		cout << "Попробуйте ещё раз: ";
		cin >> element;
	}

	return element;
}