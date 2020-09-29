#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int i;
	long l;
	long long ll;
	short s;
	char cc;
	bool b;
	double d;
	float f;
	int aa = 5, bb = 8, res;
	res = aa + bb;
	res = aa - bb;
	res = aa / bb;
	res = aa % bb;
	res = aa * bb;
	res++; // res = res + 1;
	++res; // res = res + 1;
	res--; // res = res - 1;
	--res; // res = res - 1;

	aa = 0;
	//    0   +    2 +   3  + 3    + 4  
	aa = aa++ + ++aa + ++aa + aa++ + aa; //12
	cout << aa << endl;

	aa += 3; // aa = aa + 3;
	aa -= 5; // aa = aa - 5;
	aa /= 5; // aa = aa / 5;
	aa %= 5; // aa = aa % 5;
	aa *= 5; // aa = aa * 5;

	aa ^= 5; // aa = aa ^ 5;
	aa |= 5; // aa = aa | 5;
	aa &= 5; // aa = aa & 5;
	aa = aa << 2; // побитовый сдвиг на 2 бита влево
	aa = aa >> 5; // побитовый сдвиг на 5 бита влево
	aa = ~aa; // инверсия
	aa = ~aa + 1; // aa = -aa;

	return EXIT_SUCCESS;
}