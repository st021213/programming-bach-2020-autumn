#include<iostream>

using namespace std;

/*
8. Посчитать 2^n с помощью побитовых сдвигов.
Ввод: 4
Вывод: 16
*/

int main()
{
	int n = 0;
	cin >> n;
	cout << (1 << n);

	return EXIT_SUCCESS;
}