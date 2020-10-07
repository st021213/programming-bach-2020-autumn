#include<iostream>

using namespace std;

/*
3. Вывести на экран все счастливые билеты с заданной суммой чисел.
ввод: 8
вывод: ??? количество номеров вида 116611, 125422
*/

int main()
{
	int n = 0;
	cin >> n;
	// i  j  (n - i - j)  k w (n - k - w)
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= n - i; ++j)
		{
			for (int k = 0; k <= n; ++k)
			{
				for (int w = 0; w <= n - k; ++w)
				{
					cout << i << j << (n - i - j) << k << w << (n - k - w) << endl;
				}
			}
		}
	}


	return EXIT_SUCCESS;
}