#include<iostream>

using namespace std;

/*
7. ��������� ����� ������� �����
����: 3 5
����� 243
*/
int main()
{
	int a = 0;
	int b = 0;
	int res = 1;
	cin >> a;
	cin >> b;
	
	for (int i = 0; i < b; ++i)
	{
		res *= a;
	}
	cout << res;

	return EXIT_SUCCESS;
}