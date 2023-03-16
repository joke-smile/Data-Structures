#pragma once
#include "DynamicArray.h"
#include <iostream>

/**
 *	@brief Метод для вывода меню в консоль.
*/
void Menu();

/**
 *	@brief Метод для вывода динамического массива в консоль.
 *	@param arrayInfo - Динамический массив.
*/
void CoutDynamicArray(DynamicArray* arrayInfo);

/**
 *	@brief Метод для проверки индекса после метода поиска.
 *	@param arrayInfo - Динамический массив.
 *	@param index - Индекс, который необходимо проверить.
 *	@param element - Элемент, с которым производится сравнение после метода поиска.
*/
void CheckIndex(DynamicArray* arrayInfo, int index, int element);

/**
 *	@brief Метод для ввода элемента и его проверки.
 *  @return Возвращает введённный элемент.
*/
int TryInput();

/**
 *	@brief Основной метод, в котором работает программа.
 *  @return Завершает работу программы.
*/
int main();