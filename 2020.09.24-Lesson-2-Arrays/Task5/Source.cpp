#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int j;
	int k;
	cin >> n;
	for (i = 2; i < n; i++) {
		k = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				k++;
			}
		}
		if (k == 0) {
			cout << i;
		}
	}
}