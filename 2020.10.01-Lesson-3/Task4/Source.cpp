#include<iostream>
using namespace std;

struct Array{
	int count;
	int capacity;
	int* data;
	
	void init(int initialCount = 0)
	{
		capacity = 10;
		count = initialCount;
		data = new int[capacity]{ 0 };
	}

	void freeMemory()
	{
		delete[] data;
	}

	void print()
	{
		for (int i = 0; i < count; ++i)
		{
			cout << data[i] << (i == count - 1 ? "" : ", ");
		}
		cout << endl;
	}
};

void print(Array& arr)
{
	for (int i = 0; i < arr.count; ++i)
	{
		cout << arr.data[i] << (i == arr.count - 1 ? "" : ", ");
	}
	cout << endl;
}

int main()
{
	Array a;
	a.init(3);

	print(a);

	a.print();

	a.freeMemory();
	return EXIT_SUCCESS;
}