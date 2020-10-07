#include<iostream>

using namespace std;

/*
4. Написать программу, печатающую все простые числа, не превосходящие заданного числа.
ввод: 18
вывод : 2, 3, 5, 7, 11, 17
*/

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n = 0;
	cin >> n;
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}