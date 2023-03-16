#include <iostream>
#include "DynamicArray.h"
#include "Services.h"

using namespace std;

int main()
{
	DynamicArray *arrayInfo = new DynamicArray;
	setlocale(0, "");
	while (true)
	{
		Menu();
		int choice = TryInput();
		system("cls");
		switch (choice)
		{
			case 0:
			{
				cout << "Программа завершила свою работу." << endl;
				return 0;
			}
			case 1:
			{
				CoutDynamicArray(arrayInfo);
				break;
			}
			case 2:
			{
				if (arrayInfo->Length != 0)
				{
					CoutDynamicArray(arrayInfo);
					SortingArray(arrayInfo);
					CoutDynamicArray(arrayInfo);
				}
				else
				{
					cout << "Массив пустой" << endl << endl;
				}
				break;
			}
			case 3:
			{
				CoutDynamicArray(arrayInfo);

				cout << "Введите добавляемый элемент:" << endl;
				int element = TryInput();
				AddInArray(arrayInfo, element);

				CoutDynamicArray(arrayInfo);
				break;
			}
			case 4:
			{
				CoutDynamicArray(arrayInfo);

				cout << "Введите элемент для удаления: ";
				int element = TryInput();

				bool flag = RemoveElement(arrayInfo, element);
				if (flag == true)
				{
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
				CoutDynamicArray(arrayInfo);

				cout << "Введите добавляемый элемент" << endl;
				int element = TryInput();
				AddInStartingOfArray(arrayInfo, element);

				CoutDynamicArray(arrayInfo);
				break;
			}
			case 6:
			{
				CoutDynamicArray(arrayInfo);

				cout << "Введите элемент для добавления" << endl;
				int element = TryInput();

				cout << "Введите элемент, после которого хотите добавить: ";
				int leftLimit = TryInput();

				int index = FindElementInArray(arrayInfo, leftLimit);

				if (index == arrayInfo->Length)
				{
					cout << "Элемент не найден" << endl << endl;
				}
				else
				{
					AddAfterDefiniteElement(arrayInfo, element, index);
					CoutDynamicArray(arrayInfo);
				}
				break;
			}
			case 7:
			{
				cout << "Введите элемент для поиска" << endl;
				int element = TryInput();

				int index = FindElementInArray(arrayInfo, element);
				CheckIndex(arrayInfo, index, element);
				CoutDynamicArray(arrayInfo);
				break;
			}
			case 8:
			{
				cout << "Введите элемент для поиска" << endl;
				int element = TryInput();

				int index = BinarySearch(arrayInfo, element);
				CheckIndex(arrayInfo, index, element);
				CoutDynamicArray(arrayInfo);
				break;
			}
			case 9:
			{
				ReInitializeDynamicArray(arrayInfo);
				cout << "Массив был успешно очищен" << endl << endl;
				break;
			}
		}
	}
	delete[] arrayInfo->Array;
	delete[] arrayInfo;
	cout << endl;
	return 0;
}