#pragma once
#include<iostream>
struct ListArray {
	/* поля структуры */
	int count;
	int capacity;
	int* data;

	/* конструкторы */
	ListArray(); //конструктор по умолчанию
	ListArray(int cap); //конструктор с параметром

	/* деструктор */
	~ListArray();
};