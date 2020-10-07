#include<iostream>

using namespace std;

/*
9. Посчитать 2^n - 1 с помощью побитовых сдвигов и инверсии
Ввод: 9
Вывод: 511
*/

int main()
{
	int n = 0;
	cin >> n;
	cout << ~((~0 >> n) << n);
	return EXIT_SUCCESS;
}