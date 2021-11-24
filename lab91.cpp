
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int sec, min;
	cout << "Введите количество секунд:" << endl;
	cin >> sec;
	min = sec / 60;
	sec -= min * 60;
	cout << "С начала последней минуты прошло " << sec << " секунд";
	return 0;
}