#include<iostream>

using namespace std;

struct ListArray {
	/* поля структуры */
	int count;
	int capacity;
	int* data;

	/* конструкторы */
	ListArray() //конструктор по умолчанию
	{
		cout << "default constructor call" << endl;
		count = 0;
		capacity = 10;
		data = new int[10];
	}
	ListArray(int cap) //конструктор с параметром
	{
		cout << "parametrized constructor call" << endl;
		count = 0;
		capacity = cap;
		data = new int[cap];
	}

	/* деструктор */
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