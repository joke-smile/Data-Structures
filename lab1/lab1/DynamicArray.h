/**
 *	@brief Структура, которая содержит поля динамического массива.
*/
struct DynamicArray
{
	int Length = 0;
	const int ConstCapacity = 8;
	int Capacity = ConstCapacity;
	int* Array = new int[Length + Capacity];
};

/**
 *	@brief Метод для увеличения буфера динамического массива при его заполнении.
 *	@param arrayInfo - Динамический массив.
*/
void ResizeDynamicArray(DynamicArray* arrayInfo);

/**
 * @brief Метод для добавления элемента в конец динамического массива.
 * @param arrayInfo - Динамический массив.
 * @param element - Элемент, который необходимо добавить.
*/
void AddInArray(DynamicArray* arrayInfo, int element);

/**
 * @brief Метод для сортировки динамического массива.
 * @param arrayInfo - Динамический массив.
*/
void SortingArray(DynamicArray* arrayInfo);

/**
 * @brief Метод для добавления элемента в начало динамического массива.
 * @param arrayInfo - Динамический массив.
 * @param element - Элемент, который необходимо добавить.
*/
void AddInStartingOfArray(DynamicArray* arrayInfo, int element);

/**
 * @brief Метод для добавления элемента после определённого числа.
 * @param arrayInfo - Динамический массив.
 * @param element - Элемент, который необходимо добавить.
 * @param index - Индекс элемента, после которого необходимо добавить.
*/
void AddAfterDefiniteElement(DynamicArray* arrayInfo, int element, int index);

/**
 * @brief Метод для удаления элемента из динамического массива.
 * @param arrayInfo - Динамический массив.
 * @param element - Элемент, который необходимо удалить.
 * @return Возвращает значение, которое показывает, был ли удалён элемент.
*/
bool RemoveElement(DynamicArray* arrayInfo, int element);

/**
 * @brief Метод бинарного поиска для динамического массива.
 * @param arrayInfo - Динамический массив.
 * @param element - Элемент, который необходимо найти.
 * @return Возвращает индекс найденного элемента. 
 * Если такого элемента в массиве нет, то вернёт 0 или длину массива.
*/
int BinarySearch(DynamicArray* arrayInfo, int element);

/**
 * @brief Метод линейного поиска для динамического массива.
 * @param arrayInfo - Динамический массив.
 * @param element - Элемент, который необходимо найти.
 * @return Возвращает индекс найденного элемента.
 * Если такого элемента в массиве нет, то вернёт длину массива.
*/
int FindElementInArray(DynamicArray* arrayInfo, int element);

/**
 * @brief Метод для очистки динамического массива.
 * @param arrayInfo - Динамический массив.
*/
void ReInitializeDynamicArray(DynamicArray* arrayInfo);

/**
 * @brief Метод для уменьшения буфера.
 * @param arrayInfo - Динамический массив.
*/
void ReductionDynamicArray(DynamicArray* arrayInfo);