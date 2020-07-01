#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Программа определит существует ли треугольник с заданными стронами" << endl;
    int a, b, c;
    cout << "Введите три стороны" << endl;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Существует" << endl;
    }
    else {
        cout << "Не существует" << endl;
    }

    return 0;
}

