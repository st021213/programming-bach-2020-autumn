#pragma once
#include<iostream>
using namespace std;
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

	void push_back(int element);
	void print();
};