#include<iostream>

using namespace std;

/*
2. �������� ��������� ���������� ��������� �������� �� ������� a �� b (����� �����), ��������� ������ �������� ��������, ��������� � ���������.
����: 9 4
�����: 2
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