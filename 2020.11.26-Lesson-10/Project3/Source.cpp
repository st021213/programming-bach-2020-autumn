#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	//cin >> str;
	getline(cin, str, ' ');
	cout << "\"" << str << "\"" << endl;

	getline(cin, str);
	cout << "\"" << str << "\"" << endl;

	getline(cin, str, ',');
	cout << "\"" << str << "\"" << endl;
	getline(cin, str);
	cout << "\"" << str << "\"" << endl;

	return 0;
}