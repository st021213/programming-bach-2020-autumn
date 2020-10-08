#include<iostream>

using namespace std;

struct ListArray {
	/* поля структуры */
	int count;
	int capacity;
	int* data;
};

int main()
{
	ListArray a;
	a.count = 0;
	a.capacity = 10;
	a.data = new int[10];

	delete[] a.data;
	return 0;
}