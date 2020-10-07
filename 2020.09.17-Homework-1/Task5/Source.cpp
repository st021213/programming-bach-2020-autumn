#include<iostream>

using namespace std;

/*
5. Посчитать количество делителей числа.
ввод: 16
вывод: 5
*/
int main()
{
	int n = 0;
	int count = 2;
	cin >> n;

	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			count += 2;
		}
		if (i * i == n)
		{
			--count;
		}
	}

	cout << count;	
	return EXIT_SUCCESS;
}