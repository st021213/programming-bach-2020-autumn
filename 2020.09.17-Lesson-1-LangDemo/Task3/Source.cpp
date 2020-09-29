#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	a %= 7;
	if (a == 1)
	{
		cout << "Понедельник" << endl;
	}
	if (a == 2)
	{
		cout << "Вторник" << endl;
	}
	if (a == 3)
	{
		cout << "Среда" << endl;
	}
	if (a == 4)
	{
		cout << "Четверг" << endl;
	}
	if (a == 5)
	{
		cout << "Пятница" << endl;
	}
	if (a == 6)
	{
		cout << "Суббота" << endl;
	}
	if (a == 0)
	{
		cout << "Воскресенье" << endl;
	}

	switch (a)
	{
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	default:
		cout << "Воскресенье" << endl;
		break;
	}

	if (a > 3)
	{
		cout << 6;
	}
	else
	{
		cout << 7;
	}

	cout << (a > 3 ? 6 : 7);

	cout << (
		a == 1 ? "Понедельник" :
		a == 2 ? "Вторник" :
		a == 3 ? "Среда" :
		a == 4 ? "Четверг" :
		a == 5 ? "Пятница" :
		a == 6 ? "Суббота" : "Воскресенье") << endl;





	return EXIT_SUCCESS;
}