#pragma once
#include<iostream>
using namespace std;
struct ListArray {
	/* ���� ��������� */
	int count;
	int capacity;
	int* data;

	/* ������������ */
	ListArray(); //����������� �� ���������
	ListArray(int cap); //����������� � ����������
	
	/* ���������� */
	~ListArray();

	void push_back(int element);
	void print();
};