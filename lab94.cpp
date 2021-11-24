
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b, c, d =0, e=0;
    cout << "Введите длину и ширину прямоугольника:" << endl;
    cin >> a >> b;
    cout << "Введите сторону квадрата:" << endl;
    cin >> c;
    for (int i = a; i >= c; i -= c)
    {
        d++;
    }
    for (int j = b; j >= c; j -= c)
    {
        e++;
    }
    cout << "В прямоугольник войдет: " << d * e << " квадратов" <<endl;
    cout<< "Незанятая площадь прямоугольника равна: " << a * b - d * e * c * c;
    return 0;
}

