#include<iostream>
#include "ListArray.h"

using namespace std;

int countDigits(int n)
{
	int res = 0;
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return res;
}

int countLength(ListArray& arr)
{
	int result = 5; // [/]{}
	result += countDigits(arr.capacity);
	result += countDigits(arr.count);
	for (int i = 0; i < arr.count; ++i)
	{
		result += countDigits(arr.data[i]) + 2; //добавить ", "
	}
	result -= 2; // отсутствие ", " у последнего
	return result;
}

void addSymbol(char*& str, int& last, char symbol)
{
	str[last] = symbol;
	last++;
}

//TODO:доработать
void addNumber(char*& str, int& last, int number)
{
	int len = countDigits(number);
	for (int i = 0; i < len; ++i)
	{
		int x = number;
		for (int j = i; j > 0; --j)
		{
			x /= 10;
		}
		addSymbol(str, last, '0' + x % 10);
	}
}

char* convertToString(ListArray& arr)
{
	int lenght = countLength(arr) + 1;
	char* str = new char[countLength(arr) + 1];
	int index = 0;
	addSymbol(str, index, '[');
	addNumber(str, index, arr.count);
	addSymbol(str, index, '/');
	addNumber(str, index, arr.capacity);
	addSymbol(str, index, ']');
	addSymbol(str, index, '\0');
	return str;
}

int main()
{
	ListArray a;
	a.push_back(3); a.push_back(2); a.push_back(6);
	cout << convertToString(a) << endl;
	return 0;
}