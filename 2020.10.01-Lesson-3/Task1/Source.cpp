#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void increment1(int i) //передача переменной по значению
{
	i++;
}

void increment2(int& i) //передача переменной по ссылке
{
	i++;
}

int main()
{
	int a = 0;
	cout << "a = " << a << endl;
	increment1(a);
	cout << "inrement 1: " << a << endl;

	increment2(a);
	cout << "inrement 2: " << a << endl;

	increment2(a);
	cout << "inrement 2: " << a << endl;

	increment1(a);
	cout << "inrement 1: " << a << endl;

	increment2(a);
	cout << "inrement 2: " << a << endl;

	increment2(a);
	cout << "inrement 2: " << a << endl;

	int c = 19;
	cout << "a = " << a << "\tc = " << c << endl;
	swap(a, c);
	cout << "a = " << a << "\tc = " << c << endl;

	return EXIT_SUCCESS;
}