#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int n, k;
	cout << "Введите день (от 1-го до 365-го) :" << endl;
	cin >> k;
	cout << "Введите номер дня недели для 1-го января :" << endl;
	cin >> n;
	cout << "День недели под номером : ";
	if ((k + n - 1) % 7 == 0) {
		cout << "7";
	}
	else {
		cout << (k + n - 1) % 7;
	}
	
	return 0;

}
