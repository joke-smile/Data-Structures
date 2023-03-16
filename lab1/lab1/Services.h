#pragma once
#include "DynamicArray.h"
#include <iostream>

/**
 *	@brief ����� ��� ������ ���� � �������.
*/
void Menu();

/**
 *	@brief ����� ��� ������ ������������� ������� � �������.
 *	@param arrayInfo - ������������ ������.
*/
void CoutDynamicArray(DynamicArray* arrayInfo);

/**
 *	@brief ����� ��� �������� ������� ����� ������ ������.
 *	@param arrayInfo - ������������ ������.
 *	@param index - ������, ������� ���������� ���������.
 *	@param element - �������, � ������� ������������ ��������� ����� ������ ������.
*/
void CheckIndex(DynamicArray* arrayInfo, int index, int element);

/**
 *	@brief ����� ��� ����� �������� � ��� ��������.
 *  @return ���������� ��������� �������.
*/
int TryInput();

/**
 *	@brief �������� �����, � ������� �������� ���������.
 *  @return ��������� ������ ���������.
*/
int main();