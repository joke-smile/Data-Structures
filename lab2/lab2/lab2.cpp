#include <iostream>
#include <cstdlib>
using namespace std;

struct List
{
	int field; //Поле данных
	struct List* prev = NULL; //Указатель на предыдущий элемент
	struct List* next = NULL; //Указатель на следующий элемент
};

void Menu()
{
	cout << "Select the number of task:" << endl;
	cout << "0. Завершить работу программы." << endl;
	cout << "1. Создание и инициализация полей списка." << endl;
	cout << "2. Добавление элемента." << endl;
	cout << "3. Удаление элемента." << endl;
	cout << "4. Вставка элемента в начало." << endl;
	cout << "5. Вставка элемента в конец." << endl;
	cout << "6. Вставка после определённого элемента." << endl;
	cout << "7. Вставка перед определённым элементом." << endl;
	cout << "8. Сортировка списка." << endl;
	cout << "9. Линейный поиск элемента в массиве." << endl << endl;
}

void CoutList(List* list)
{
	List* temp = new List;
	temp = list;
	while (list->prev != NULL)
	{
		temp = list->prev;
	}
	cout << temp->field << " ";
	while (list->next != NULL)
	{
		cout << list->field << " ";
		list = list->next;
	}
	cout << endl;
}

void SortingList(List* list)
{
	List* temp;
	temp = list;
	while (temp->prev != NULL)
	{
		if (temp->prev->field > temp->field)
		{
			int n = temp->field;
			temp->field = temp->prev->field;
			temp->prev->field = n;
		}
		temp = temp->prev;
	}
}

List* InitializeList(int a)
{
	struct List* list;
	list = (struct List*)malloc(sizeof(struct List));
	list->field = a;
	list->next = NULL;
	list->prev = NULL;
	return(list);
}

List* AddElement(List* list, int value)
{
	struct List* temp = new List();

	list->next = temp;
	temp->field = value;
	temp->next = NULL;
	temp->prev = list;
	return temp;
}

int main()
{
	setlocale(0, "");
	List* list = new List;
	List* headList = new List;
	while (true)
	{
		int choice;
		cout << "Select the number of task" << endl;
		cin >> choice;
		switch (choice)
		{
			case 0:
			{
				cout << "Программа завершила свою работу.";
				return 0;
			}
			case 1:
			{
				InitializeList(NULL);
				break;
			}
			case 2:
			{
				cout << "Введите добавляемый элемент: ";
				int element;
				cin >> element;
				cout << "Результат добавления:" << endl;
				list = AddElement(list, element);
				CoutList(list);
				break;
			}
			case 3:
			{
				CoutList(list);
				break;
			}
			case 4:
			{
				SortingList(list);
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				break;
			}
			case 7:
			{
				break;
			}
			case 8:
			{
				break;
			}
			case 9:
			{
				break;
			}
		}
	}
	return 0;
}