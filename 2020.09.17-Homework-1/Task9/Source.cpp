#include<iostream>

using namespace std;

/*
9. ��������� 2^n - 1 � ������� ��������� ������� � ��������
����: 9
�����: 511
*/

int main()
{
	int n = 0;
	cin >> n;
	cout << ~((~0 >> n) << n);
	return EXIT_SUCCESS;
}