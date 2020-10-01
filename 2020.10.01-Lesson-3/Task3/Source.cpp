#include<iostream>

using namespace std;

int main()
{
	int* a = new int[10];
	a += 2;
	*(a - 2) = 3;
	*(a - 1) = 10;
	*a = 4;
	*(a + 1) = 2;
	*(a + 2) = 8;
	for (int i = 0; i < *(a - 2); ++i)
	{
		cout << *(a + i) << " ";
	}
	cout << endl;
	//a -= 2; // возвращаем указатель в исходное место;
	delete[] (a - 2);
	//system("pause");
	return EXIT_SUCCESS;
}