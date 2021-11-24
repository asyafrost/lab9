

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	cout << "Введите год:" << endl;
	int x;
	cin >> x;
	x /= 100;
	x += 1;
	cout << "Это " << x << "-е столетие.";
	return 0;
}
