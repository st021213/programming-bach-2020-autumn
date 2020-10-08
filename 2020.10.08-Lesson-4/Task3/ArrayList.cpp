#include "ArrayList.h"
ListArray::ListArray()
{
	std::cout << "default constructor call" << std::endl;
	count = 0;
	capacity = 10;
	data = new int[10];
}
ListArray::ListArray(int cap)
{
	std::cout << "parametrized constructor call" << std::endl;
	count = 0;
	capacity = cap;
	data = new int[cap];
}

ListArray::~ListArray()
{
	std::cout << "destructor call " << capacity << std::endl;
	delete[] data;
}