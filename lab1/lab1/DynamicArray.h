/**
 *	@brief ���������, ������� �������� ���� ������������� �������.
*/
struct DynamicArray
{
	int Length = 0;
	const int ConstCapacity = 8;
	int Capacity = ConstCapacity;
	int* Array = new int[Length + Capacity];
};

/**
 *	@brief ����� ��� ���������� ������ ������������� ������� ��� ��� ����������.
 *	@param arrayInfo - ������������ ������.
*/
void ResizeDynamicArray(DynamicArray* arrayInfo);

/**
 * @brief ����� ��� ���������� �������� � ����� ������������� �������.
 * @param arrayInfo - ������������ ������.
 * @param element - �������, ������� ���������� ��������.
*/
void AddInArray(DynamicArray* arrayInfo, int element);

/**
 * @brief ����� ��� ���������� ������������� �������.
 * @param arrayInfo - ������������ ������.
*/
void SortingArray(DynamicArray* arrayInfo);

/**
 * @brief ����� ��� ���������� �������� � ������ ������������� �������.
 * @param arrayInfo - ������������ ������.
 * @param element - �������, ������� ���������� ��������.
*/
void AddInStartingOfArray(DynamicArray* arrayInfo, int element);

/**
 * @brief ����� ��� ���������� �������� ����� ������������ �����.
 * @param arrayInfo - ������������ ������.
 * @param element - �������, ������� ���������� ��������.
 * @param index - ������ ��������, ����� �������� ���������� ��������.
*/
void AddAfterDefiniteElement(DynamicArray* arrayInfo, int element, int index);

/**
 * @brief ����� ��� �������� �������� �� ������������� �������.
 * @param arrayInfo - ������������ ������.
 * @param element - �������, ������� ���������� �������.
 * @return ���������� ��������, ������� ����������, ��� �� ����� �������.
*/
bool RemoveElement(DynamicArray* arrayInfo, int element);

/**
 * @brief ����� ��������� ������ ��� ������������� �������.
 * @param arrayInfo - ������������ ������.
 * @param element - �������, ������� ���������� �����.
 * @return ���������� ������ ���������� ��������. 
 * ���� ������ �������� � ������� ���, �� ����� 0 ��� ����� �������.
*/
int BinarySearch(DynamicArray* arrayInfo, int element);

/**
 * @brief ����� ��������� ������ ��� ������������� �������.
 * @param arrayInfo - ������������ ������.
 * @param element - �������, ������� ���������� �����.
 * @return ���������� ������ ���������� ��������.
 * ���� ������ �������� � ������� ���, �� ����� ����� �������.
*/
int FindElementInArray(DynamicArray* arrayInfo, int element);

/**
 * @brief ����� ��� ������� ������������� �������.
 * @param arrayInfo - ������������ ������.
*/
void ReInitializeDynamicArray(DynamicArray* arrayInfo);

/**
 * @brief ����� ��� ���������� ������.
 * @param arrayInfo - ������������ ������.
*/
void ReductionDynamicArray(DynamicArray* arrayInfo);