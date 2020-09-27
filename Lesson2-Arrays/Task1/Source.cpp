#include<iostream>
#define N 10 //константы в стиле —
const int LEN = 10; //константы в стиле C++

using namespace std;

int main(int argc, char* argv[])
{
	int a[N] = { 0 };
	int b[LEN] = { 0 };
	int c[3] = { 3, 1, 4 };
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}