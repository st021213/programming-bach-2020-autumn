#pragma once
#include<iostream>
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
};