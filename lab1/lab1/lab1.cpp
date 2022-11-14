#include <iostream>
#include "DynamicArray.h"
using namespace std;

/**
 *	@brief Метод для вывода меню в консоль.        
*/
void Menu()
{
	cout << "Select the number of task:" << endl;
	cout << "0. Завершить работу программы" << endl;
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

/**
 *	@brief Метод для вывода динамического массива в консоль.
 *	@param arrayInfo - Динамический массив.
*/
void CoutDynamicArray(DynamicArray* arrayInfo)
{
	for (int i = 0; i < arrayInfo->Length; i++)
	{
		cout << arrayInfo->Array[i] << " ";
	}
	cout << endl;
}

/**
 *	@brief Метод для проверки индекса после метода поиска.
 *	@param arrayInfo - Динамический массив.
 *	@param index - Индекс, который необходимо проверить.
 *	@param element - Элемент, с которым производится сравнение после метода поиска.
*/
void CheckIndex(DynamicArray* arrayInfo, int index, int element)
{
	if (arrayInfo->Array[index] != element)
	{
		cout << "Элемент не найден" << endl;
	}
	else
	{
		cout << "Элемент найден под индексом " << index << endl;
	}
}

/**
 *	@brief Метод для считывания элемента.
*/
int InputElement()
{
	int element;
	cin >> element;
	return element;
}

/**
 *	@brief Основной метод, в котором работает программа.
*/
int main()
{
	DynamicArray* arrayInfo = new DynamicArray;
	setlocale(0, "");
	int choice;
	while (true)
	{
		Menu();
		cin >> choice;
		switch(choice)
		{
			case 0:
			{
				cout << "Программа завершила свою работу";
				return 0;
			}
			case 1: 
			{
				cout << "Your array is:" << endl;
				CoutDynamicArray(arrayInfo);
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "Массив до сортировки:" << endl;
				CoutDynamicArray(arrayInfo);
				SortingArray(arrayInfo);
				
				cout << "Массив после сортировки:" << endl;
				CoutDynamicArray(arrayInfo);
				cout << endl;
				break;
			}
			case 3:
			{
				cout << "Массив до добавления:" << endl;
				CoutDynamicArray(arrayInfo);

				cout << "Введите добавляемый элемент" << endl;
				int element = InputElement();
				AddInArray(arrayInfo, element);

				cout << "Массив после добавления:" << endl;
				CoutDynamicArray(arrayInfo);
				cout << endl;
				break;
			}
			case 4:
			{
				cout << "Массив до удаления:" << endl;
				CoutDynamicArray(arrayInfo);

				cout << "Введите элемент для удаления: ";
				int element = InputElement();

				bool flag = RemoveElement(arrayInfo, element);
				if (flag == true)
				{
					cout << "Массив после удаления:" << endl;
					CoutDynamicArray(arrayInfo);
				}
				else
				{
					cout << "Элемент не найден." << endl << endl;
				}
				break;
			}
			case 5:
			{
				int element = InputElement();
				
				AddInStartingOfArray(arrayInfo, element);
				cout << "Массив после добавления:" << endl;
				CoutDynamicArray(arrayInfo);
				break;
			}
			case 6:
			{
				int element = InputElement();
				cout << "Введите элемент, после которого хотите добавить: ";
				int leftLimit = InputElement();
				int index = FindElementInArray(arrayInfo, leftLimit);

				if (index == arrayInfo->Length)
				{
					cout << "Элемент не найден" << endl;
				}
				else
				{
					AddAfterDefiniteElement(arrayInfo, element, index);
				}
				break;
			}
			case 7:
			{
				cout << "Введите элемент для поиска" << endl;
				int element = InputElement();
				int index = FindElementInArray(arrayInfo, element);
				CheckIndex(arrayInfo, index, element);
				cout << endl;
				break;
			}
			case 8:
			{
				cout << "Введите элемент для поиска" << endl;
				int element = InputElement();
				int index = BinarySearch(arrayInfo, element);
				CheckIndex(arrayInfo, index, element);
				cout << endl;
				break;
			}
			case 9:
			{
				ReInitializeDynamicArray(arrayInfo);
				cout << "Массив был успешно очищен" << endl;
				break;
			}
		}
	}
	delete[] arrayInfo->Array;
	delete[] arrayInfo;
	cout << endl;
	return 0;
}