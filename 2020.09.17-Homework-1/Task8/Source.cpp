#include<iostream>

using namespace std;

/*
8. ��������� 2^n � ������� ��������� �������.
����: 4
�����: 16
*/

int main()
{
	int n = 0;
	cin >> n;
	cout << (1 << n);

	return EXIT_SUCCESS;
}