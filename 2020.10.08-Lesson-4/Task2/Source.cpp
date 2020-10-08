#include<iostream>

using namespace std;

struct ListArray {
	/* ���� ��������� */
	int count;
	int capacity;
	int* data;

	/* ������������ */
	ListArray() //����������� �� ���������
	{
		cout << "default constructor call" << endl;
		count = 0;
		capacity = 10;
		data = new int[10];
	}
	ListArray(int cap) //����������� � ����������
	{
		cout << "parametrized constructor call" << endl;
		count = 0;
		capacity = cap;
		data = new int[cap];
	}

	/* ���������� */
	~ListArray()
	{
		cout << "destructor call " << capacity << endl;
		delete[] data;
	}

};

int main()
{
	ListArray a;
	ListArray b(20);


	return 0;
}