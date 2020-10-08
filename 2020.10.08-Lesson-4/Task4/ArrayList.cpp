#include "ArrayList.h"

ListArray::ListArray()
{
	count = 0;
	capacity = 10;
	data = new int[10];
}

ListArray::ListArray(int cap)
{
	count = 0;
	capacity = cap;
	data = new int[cap];
}

ListArray::~ListArray()
{
	delete[] data;
}

void expand(int*& data, int& capacity)
{
	int* newData = new int[capacity * 2];
	for (int i = 0; i < capacity; ++i)
	{
		newData[i] = data[i];
	}
	delete[] data;
	data = newData;
	capacity *= 2;
}

void ListArray::push_back(int element)
{
	if (count == capacity)
	{
		expand(data, capacity);
	}
	data[count] = element;
	++count;
}

void ListArray::print()
{
	printf("[%d/%d]{", count, capacity);
	for (int i = 0; i < count; ++i)
	{
		printf("%d%s", data[i], (i == count - 1? "" : ", "));
	}
	printf("}\n");
}
