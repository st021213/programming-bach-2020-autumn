#include<iostream>

using namespace std;

/*
6. Посчитать факториал числа.
Ввод: 5
Вывод: 120
*/

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

int main()
{
	int n = 0;
	int res = 1;

	cin >> n;
	for (int i = 2; i <= n; ++i)
	{
		res *= i;
	}
	cout << res;

	return EXIT_SUCCESS;
}