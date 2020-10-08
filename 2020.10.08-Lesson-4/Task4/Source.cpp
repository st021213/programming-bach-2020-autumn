#include<iostream>
#include"ArrayList.h"

using namespace std;

int main()
{
	ListArray a(5);
	for (int i = 0; i < 15; ++i)
	{
		int x = 0;
		cin >> x;
		a.push_back(x);
		a.print();
	}

	return 0;
}