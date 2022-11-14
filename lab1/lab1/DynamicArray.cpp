#include "DynamicArray.h"
#include <iostream>

using namespace std;

void ResizeDynamicArray(DynamicArray* arrayInfo)
{
	if (arrayInfo->Length >= arrayInfo->Capacity)
	{
		arrayInfo->Capacity += arrayInfo->ConstCapacity;

		int* tempArrayInfo = new int[arrayInfo->Capacity];

		for (int i = 0; i < arrayInfo->Length; i++)
		{
			tempArrayInfo[i] = arrayInfo->Array[i];
		}

		delete[] arrayInfo->Array;
		arrayInfo->Array = new int[arrayInfo->Capacity];
		for (int i = 0; i < arrayInfo->Length; i++)
		{
			arrayInfo->Array[i] = tempArrayInfo[i];
		}
		delete[] tempArrayInfo;
	}
}

void ReductionDynamicArray(DynamicArray* arrayInfo)
{
	if ((arrayInfo->Capacity - arrayInfo->Length) > arrayInfo->ConstCapacity)
	{
		int* tempArrayInfo = new int[arrayInfo->Length];
		for (int i = 0; i < arrayInfo->Length; i++)
		{
			tempArrayInfo[i] = arrayInfo->Array[i];
		}
		arrayInfo->Capacity -= arrayInfo->ConstCapacity;
		delete[] arrayInfo->Array;
		arrayInfo->Array = new int[arrayInfo->Capacity];
		for (int i = 0; i < arrayInfo->Length; i++)
		{
			arrayInfo->Array[i] = tempArrayInfo[i];
		}
		delete[] tempArrayInfo;
	}
}

void AddInArray(DynamicArray* arrayInfo, int element)
{
	ResizeDynamicArray(arrayInfo);
	arrayInfo->Length++;
	arrayInfo->Array[arrayInfo->Length - 1] = element;
}

void SortingArray(DynamicArray* arrayInfo)
{
	for (int i = 0; i < arrayInfo->Length; i++)
	{
		for (int j = i; j < arrayInfo->Length; j++)
		{
			if (arrayInfo->Array[i] > arrayInfo->Array[j])
			{
				int temp;
				temp = arrayInfo->Array[i];
				arrayInfo->Array[i] = arrayInfo->Array[j];
				arrayInfo->Array[j] = temp;
			}
		}
	}
}

void AddInStartingOfArray(DynamicArray* arrayInfo, int element)
{
	ResizeDynamicArray(arrayInfo);
	arrayInfo->Length++;
	for (int i = arrayInfo->Length - 1; i - 1 >= 0; i--)
	{
		arrayInfo->Array[i] = arrayInfo->Array[i - 1];
	}
	arrayInfo->Array[0] = element;
}

bool RemoveElement(DynamicArray* arrayInfo, int element)
{
	bool flag = false;
	int index = 0;
	for (int i = 0; i < arrayInfo->Length; i++)
	{
		if (element == arrayInfo->Array[i])
		{
			index = i;
			flag = true;
			for (int i = index; i < arrayInfo->Length; i++)
			{
				if (i + 1 < arrayInfo->Length)
				{
					arrayInfo->Array[i] = arrayInfo->Array[i + 1];
				}
			}
			arrayInfo->Length--;
			return flag;
		}
	}
	ReductionDynamicArray(arrayInfo);
	return flag;
}

int FindElementInArray(DynamicArray* arrayInfo, int element)
{
	int index = arrayInfo->Length;
	for (int i = 0; i < arrayInfo->Length; i++)
	{
		if (arrayInfo->Array[i] == element)
		{
			index = i;
			break;
		}
	}
	return index;
}

int BinarySearch(DynamicArray* arrayInfo, int element)
{
	SortingArray(arrayInfo);
	int first = 0;
	int last = arrayInfo->Length;
	while (first < last)
	{
		int mid = (first + last) / 2;
		if (element <= arrayInfo->Array[mid])
		{
			last = mid;
		}
		else
		{
			first = mid + 1;
		}
	}
	return first;
}

void AddAfterDefiniteElement(DynamicArray* arrayInfo, int element, int index)
{
	ResizeDynamicArray(arrayInfo);
	arrayInfo->Length++;
	for (int i = arrayInfo->Length - 1; i > index + 1; i--)
	{
		arrayInfo->Array[i] = arrayInfo->Array[i - 1];
	}
	arrayInfo->Array[index + 1] = element;
}

void ReInitializeDynamicArray(DynamicArray* arrayInfo)
{
	arrayInfo->Capacity = arrayInfo->ConstCapacity;
	arrayInfo->Length = 0;
	delete[] arrayInfo->Array;
	arrayInfo->Array = new int[arrayInfo->Length + arrayInfo->ConstCapacity];
}