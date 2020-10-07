#include<iostream>

using namespace std;

/*
2. Ќаписать программу нахождени€ неполного частного от делени€ a на b (целые числа), использу€ только операции сложени€, вычитани€ и умножени€.
ввод: 9 4
вывод: 2
*/

int main()
{
	int a = 0;
	int b = 0;
	int count = 0;

	cin >> a;
	cin >> b;
	while (a >= b)
	{
		count++;
		a -= b;
	}
	cout << count;


	return EXIT_SUCCESS;
}