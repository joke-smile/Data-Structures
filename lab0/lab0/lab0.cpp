#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
using namespace std;

//Здесь перечислены вспомогательные функции:
void CoutMeny() 
{
	cout << "1. Task 1.1.1.1" << endl;
	cout << "2. Task 1.1.1.2" << endl;
	cout << "3. Task 1.1.2.1" << endl;
	cout << "4. Task 1.1.2.2" << endl;
	cout << "5. Task 1.1.2.3" << endl;
	cout << "6. Task 1.1.3.1" << endl;
	cout << "7. Task 1.1.3.2" << endl;
	cout << "8. Task 1.1.3.3" << endl;
	cout << "9. Task 1.1.3.4" << endl;
	cout << "10. Task 1.1.4.1" << endl;
	cout << "11. Task 1.1.4.2" << endl;
	cout << "12. Task 1.1.4.3" << endl;
	cout << "13. Task 1.1.4.4" << endl;
	cout << "14. Task 1.1.4.5" << endl;
	cout << "15. Task 1.1.4.6" << endl;
	cout << "16. Task 1.1.4.7" << endl;
	cout << "17. Task 1.1.4.8" << endl;
	cout << "18. Task 1.1.5.1" << endl;
	cout << "19. Task 1.1.5.2" << endl;
	cout << "20. Task 1.1.5.3" << endl;
	cout << "21. Task 1.1.5.4" << endl;
	cout << "22. Task 1.1.5.5" << endl;
	cout << "23. Task 1.1.5.6" << endl;
	cout << "24. Task 1.1.5.7" << endl;
	cout << "25. Task 1.1.5.8" << endl;
}

void SortingArray(int* array) 
{ //Функция сортировки массива целых чисел.
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (array[i] < array[j]) 
			{
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void SortingArray(double* array) 
{ //Функция сортировки массива вещественных чисел.
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (array[i] < array[j]) 
			{
				double temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

double GetPower(double base, int exponent) 
{ //Функция возведения в степень.
	int i = 1;
	double changed = base;
	if (exponent == 0)
	{
		return 1;
	}

	while (i != exponent) 
	{
		changed = changed * base;
		i++;
	}
	return changed;
}

void CoutResult(double base, int exponent) 
{ //Функция вывода результата возведения в степень.
	double result = GetPower(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << endl;
}

void DemoGetPower(double base, int exponent) 
{
	CoutResult(base, exponent);
}

void RoundToTens(int& value) 
{ //Функция округления.
	int OldValue = value;
	if ((value % 10) < 5) 
	{
		value = (value / 10) * 10;
	}
	else 
	{
		value = ((value / 10) + 1) * 10;
	}
	cout << "For " << OldValue << " rounded value is " << value;
	cout << endl;
}

void CinNumberForRounding() 
{ //Функция считывания числа для округления.
	int n;
	cout << "Введите число для округления" << endl;
	cin >> n;
	RoundToTens(n);
}

void Foo(double a) 
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;

	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}

void Foo2(double& a) 
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;

	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}

void Foo3(double* a) 
{
	cout << "Address in pointer: " << a << endl;
	cout << "Address of pointer: " << &a << endl;
	cout << "Value in pointer address: " << *a << endl;

	*a = 15.0;
	cout << "New value in pointer address: " << *a << endl;
}

void FindingIndexOfArray(int* array, int size) 
{ //Функция поиска числа в массиве, а также вывод индексов.
	int searchingValue;
	int count = 0;
	cout << "Введите значение для поиска: ";
	cin >> searchingValue;
	cout << endl;

	for (int i = 0; i < size; i++) 
	{
		if (array[i] == searchingValue) 
		{
			count++;
			break;
		}
	}
	if (count != 0) 
	{
		cout << "Index of searching value of: ";
		for (int i = 0; i < size; i++) 
		{
			if (array[i] == searchingValue) 
			{
				cout << i << " ";
			}
		}
	}
	else 
	{
		cout << "В массиве нет такого числа";
	}
	cout << endl << endl;
}

void FindingLetters(char* array, int size) 
{ //Фукнция поиска и вывода маленьких латинских букв.
	cout << "Letters in array:" << endl;
	for (int i = 0; i < size; i++) 
	{
		if (array[i] >= 'a' && array[i] <= 'z')
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;
}

int* MakeRandomArray(int arraySize) 
{ //Функция создания и инициализации массива.
	int* array = new int[arraySize];
	for (int i = 0; i < arraySize; i++) 
	{
		int random_value = rand() % 101;
		array[i] = random_value;
	}
	int *p = array;
	return p;
}

int CountPositiveValues(int* values, int count) 
{ //Функция поиска количества целых положительных чисел.
	int result = 0;
	for (int i = 0; i < count; i++) 
	{
		if (values[i] > 0) 
		{
			result++;
		}
	}
	return result;
}

int* ReadArray(int count) 
{ //Функция создания и инициализации массива.
	int* values = new int[count];
	for (int i = 0; i < count; i++) 
	{
		cout << "Введите значение элемента массива с индексом " << i << endl;
		cin >> values[i];
	}
	return values;
}

void ReadCoutDeleteArray(int count) 
{
	int* values = ReadArray(count);
	cout << "Count is: " << CountPositiveValues(values, count) << endl << endl;
	delete[] values;
}

void CoutIntArray(int* array, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void CoutDoubleArray(double* array, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void CoutStringArray(char* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void MakeCoutDeleteRandomArray(int n)
{
	int* array = MakeRandomArray(n);
	cout << "Random array of " << n << endl;
	CoutIntArray(array, n);
	cout << endl;

	delete[] array;
}

//Здесь перечислены все задания:
void Task1111() 
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 10; i++) 
	{
		sum += add * i; //0, 1.1, 3.52, 7.513, 13.369, 21.421, 32.05, 45.692, 62.841, 84.062
		add *= 1.1;
	}
	cout << "Total sum is " << sum << endl << endl;
}

void Task1112() 
{
	double add = 1.0;
	double sum = 0.0;

	for (int i = 0; i < 1000; i++)
	{
		sum += add * i;
		if (i % 3 == 0)
		{
			add *= 1.1;
		}
		else
		{
			add /= 3.0;
		}
	}
	cout << "Total sum is " << sum << endl << endl;
}

void Task1121() 
{
	int array[10] = { 12, 1, 7, 2, 8, 9, 0, 4, 11, 17 };
	cout << endl;

	cout << "Source array is " << endl;
	CoutIntArray(array, 10);
	cout << endl;

	SortingArray(array);
	cout << "Sorted array is " << endl;
	CoutIntArray(array, 10);
	cout << endl << endl;
}

void Task1122() 
{
	const int n = 12;
	int count = 0;
	double array[n] = { 1.0, 2.5, 10.0, 17.2, 0.5, 3.3, 4.7,
	88.1, -2.0, -10.0, -11.1, -5.0 };

	CoutDoubleArray(array, n);
	cout << endl;

	double searchingValue;
	cout << "Введите число для сравнение" << endl;
	cin >> searchingValue;
	cout << endl;

	for (int i = 0; i < n; i++) 
	{
		if (array[i] >= searchingValue) 
		{
			count++;
		}
	}
	cout << "Количество чисел, больших или равных " << count << endl;
	cout << endl;
}

void Task1123() 
{
	int size = 8;
	char array[8] = { 'a', 'b', '%', '$', 'e', '&', 'g', 'h' };

	cout << "Your array is:" << endl;
	CoutStringArray(array, size);

	cout << "All letters in your array:" << endl;
	for (int i = 0; i < size; i++) 
	{
		if (array[i] >= 'a' && array[i] <= 'z') 
		{
			cout << array[i] << " ";
		}
	}
	cout << endl << endl;
}

void Task1131() 
{
	double base;
	int exponent;
	cout << "Введите число для возведения в степень" << endl;
	cin >> base;

	cout << "Введите степень" << endl;
	cin >> exponent;

	double result = GetPower(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << endl;
	cout << endl;
}

void Task1132() 
{
	double base = 2.0;
	int exponent = 5;
	double result = GetPower(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << endl;

	base = 3.0;
	exponent = 4;
	result = GetPower(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << endl;

	base = -2.0;
	exponent = 5;
	result = GetPower(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << endl;
	cout << endl;
}

void Task1133() 
{
	double base = 2.0;
	int exponent = 5;
	DemoGetPower(base, exponent);

	base = 3.0;
	exponent = 4;
	DemoGetPower(base, exponent);

	base = -2.0;
	exponent = 5;
	DemoGetPower(base, exponent);
}

void Task1134() 
{
	CinNumberForRounding();
	CinNumberForRounding();
	CinNumberForRounding();
	cout << endl << endl;
}

void Task1141() 
{
	int a = 5;
	int b = 4;
	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;

	double c = 13.5;
	cout << "Address of c: " << &c << endl;

	bool d = true;
	cout << "Address of d: " << &d << endl;
	cout << endl;
}

void Task1142() 
{
	int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };

	cout << "Size of int type: " << sizeof(int) << endl;
	for (int i = 0; i < 10; i++) 
	{
		cout << "Address of a[" << i << "]: " << &a[i] << endl;
	}
	cout << endl;

	cout << "Size of double type: " << sizeof(double) << endl;
	double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2 };
	for (int i = 0; i < 10; i++) 
	{
		cout << "Address of b[" << i << "]: " << &b[i] << endl;
	}
	cout << endl;
}

void Task1143() 
{
	int a = 5;
	int& b = a;

	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;

	cout << endl;
	b = 7;
	cout << "Value of a: " << a << endl;
	cout << endl;
}

void Task1145() 
{
	double a = 5.0;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;

	Foo(a);

	cout << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;
}

void Task1144() 
{
	double a = 5.0;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;

	Foo2(a);

	cout << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;
}

void Task1146() 
{
	int a = 5;
	int* pointer = &a;

	cout << "Address of a: " << &a << endl;
	cout << "Address in pointer: " << pointer << endl;
	cout << "Address of pointer: " << &pointer << endl;

	cout << endl;
	*pointer = 7;
	cout << "Value in a: " << a << endl;
	cout << "Value by pointer address: " << *pointer << endl;
	cout << endl;
}

void Task1147() 
{
	cout << "a * b - умножение, так как между здёздочкой два числа." << endl;
	cout << "int *p - объявление указателя, так как есть тип данных." << endl;
	cout << "*p - разыменование, так как нет типа данных и других переменных." << endl;
	cout << endl;
}

void Task1148() 
{
	double value = 5.0;
	double* pointer = &value;
	cout << "Address of value in main(): " << &value << endl;
	cout << "Address in pointer in main(): " << pointer << endl;
	cout << "Address of pointer in main(): " << &pointer << endl;
	cout << "Value of a in main(): " << value << endl;
	cout << endl;

	Foo3(pointer);
	cout << endl;
	cout << "Value of a in main(): " << value << endl;
	cout << endl;
}

void Task1151() 
{
	int n = 5;
	double* array = new double[n] {1.1, 2.0, 3.5, 7.0, 2.5};

	cout << "Array of double:" << endl;
	CoutDoubleArray(array, n);
	cout << endl;

	delete[] array;
}

void Task1152() 
{
	int n = 5;
	bool* array = new bool[n] {true, false, false, true, true};
	cout << "Array of bool:" << endl;

	for (int i = 0; i < n; i++) 
	{
		if (array[i])
		{
			cout << "true ";
		}
		else
		{
			cout << "false ";
		}
	}
	delete[] array;
	cout << endl << endl;
}

void Task1153() 
{
	int n;
	cout << "Введите положительное целое число" << endl;
	cin >> n;
	char* array = new char[n];
	for (int i = 0; i < n; i++) 
	{
		cout << "Введите array[" << i << "]: " << endl;
		cin >> array[i];
	}
	cout << "Your char array is: " << endl;
	CoutStringArray(array, n);
	cout << endl;

	delete[] array;
}

void Task1154() 
{
	int n = 10;
	double* array = new double[n] {3.1, 22.7, 7.9, 7.8, 8.0, 10.3, 12.0, 18.2, 20.1, 1.1};
	cout << "Array of double is:" << endl;
	CoutDoubleArray(array, n);
	cout << endl;

	SortingArray(array);
	cout << "Sorted array of double is:" << endl;
	CoutDoubleArray(array, n);

	delete[] array;
	cout << endl;
}

void Task1155() 
{
	int n = 10;
	int* array = new int[n] {2, 3, 1, 10, 12, 11, 3, 7, 8, 4};

	cout << "int array:" << endl;
	CoutIntArray(array, n);
	cout << endl;

	FindingIndexOfArray(array, n);
	delete[] array;
}

void Task1156() 
{
	int n = 15;
	char* array = new char[n] {'z', 'a', 'b', '&', '$', '%', 'j', 'k', 'l', 'n', 'h', 't', 'A', 'p', '1'};

	cout << "Char array is:" << endl;
	CoutStringArray(array, n);
	cout << endl;

	FindingLetters(array, n);
	cout << endl;
	delete[] array;
}

void Task1157() 
{
	int n = 5;

	MakeCoutDeleteRandomArray(n);

	n = 8;
	MakeCoutDeleteRandomArray(n);

	n = 13;
	MakeCoutDeleteRandomArray(n);
}

void Task1158() 
{
	int count = 15;
	ReadCoutDeleteArray(count);

	count = 20;
	ReadCoutDeleteArray(count);
}

//Выбор задания.
int main() 
{
	//TODO: разобрать
	srand(time(nullptr));
	setlocale(0, "");
	int choice = 0;
	while (true) 
	{
		cout << "Select the task number:" << endl;
		CoutMeny();
		cout << endl;
		cin >> choice;
		switch (choice) 
		{
			case 1:
			{
				cout << "Task 1.1.1.1" << endl << endl;
				Task1111();
				break;
			}
			case 2: 
			{
				cout << "Task 1.1.1.2" << endl << endl;
				Task1112();
				break;
			}
			case 3: 
			{
				cout << "Task 1.1.2.1" << endl << endl;
				Task1121();
				break;
			}
			case 4: 
			{
				cout << "Task 1.1.2.2" << endl << endl;
				Task1122();
				break;
			}
			case 5: 
			{
				cout << "Task 1.1.2.3" << endl << endl;
				Task1123();
				break;
			}
			case 6: 
			{
				cout << "Task 1.1.3.1" << endl << endl;
				Task1131();
				break;
			}
			case 7: 
			{
				cout << "Task 1.1.3.2" << endl << endl;
				Task1132();
				break;
			}
			case 8: 
			{
				cout << "Task 1.1.3.3" << endl << endl;
				Task1133();
				break;
			}
			case 9: 
			{
				cout << "Task 1.1.3.4" << endl << endl;
				Task1134();
				break;
			}
			case 10: 
			{
				cout << "Task 1.1.4.1" << endl << endl;
				Task1141();
				break;
			}
			case 11: 
			{
				cout << "Task 1.1.4.2" << endl << endl;
				Task1142();
				break;
			}
			case 12: 
			{
				cout << "Task 1.1.4.3" << endl << endl;
				Task1143();
				break;
			}
			case 13: 
			{
				cout << "Task 1.1.4.4" << endl << endl;
				Task1144();
				break;
			}
			case 14: 
			{
				cout << "Task 1.1.4.5" << endl << endl;
				Task1145();
				break;
			}
			case 15: 
			{
				cout << "Task 1.1.4.6" << endl << endl;
				Task1146();
				break;
			}
			case 16: 
			{
				cout << "Task 1.1.4.7" << endl << endl;
				Task1147();
				break;
			}
			case 17: 
			{
				cout << "Task 1.1.4.8" << endl << endl;
				Task1148();
				break;
			}
			case 18: 
			{
				cout << "Task 1.1.5.1" << endl << endl;
				Task1151();
				break;
			}
			case 19: 
			{
				cout << "Task 1.1.5.2" << endl << endl;
				Task1152();
				break;
			}
			case 20: 
			{
				cout << "Task 1.1.5.3" << endl << endl;
				Task1153();
				break;
			}
			case 21: 
			{
				cout << "Task 1.1.5.4" << endl << endl;
				Task1154();
				break;
			}
			case 22: 
			{
				cout << "Task 1.1.5.5" << endl << endl;
				Task1155();
				break;
			}
			case 23: 
			{
				cout << "Task 1.1.5.6" << endl << endl;
				Task1156();
				break;
			}
			case 24: 
			{
				cout << "Task 1.1.5.7" << endl << endl;
				Task1157();
				break;
			}
			case 25: 
			{
				cout << "Task 1.1.5.8" << endl << endl;
				Task1158();
				break;
			}
			default: 
			{
				return 0;
			}
		}
		system("cls");
	}
	return 0;
}