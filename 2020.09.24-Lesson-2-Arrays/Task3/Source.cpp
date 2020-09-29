#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	/*программа, котора¤ считывает числа с клавиатуры
	и записывает их в массив до тех пор,
	пока не будет введен 0*/
	int cap = 10; //capacity - пропускна¤ способность
	int* a = new int[cap];
	int count = 0;	//количество элементов, которые действительно
					//лежат в массиве
					//count - номер элемента после последнего

	while (true)
	{
		int x = 0;
		cin >> x;
		if (x == 0)
		{
			break;
		}
		if (count == cap){ //expand
			cap *= 2;
			int* temp = new int[cap]; //создаю массив большей длины
			for (int j = 0; j < count; ++j)
			{
				temp[j] = a[j]; //поэлементное копирование
			}
			delete[] a; //удал¤ю старый массив
			a = temp;
		}
		a[count] = x;
		count++;
	}

	cout << "[" << count << "/" << cap << "]{";
	for (int i = 0; i < count; ++i)
	{
		cout << a[i] << (i != count - 1 ? ", " : "");
	}
	cout << "}" << endl;
	delete[] a;

	return EXIT_SUCCESS;
}