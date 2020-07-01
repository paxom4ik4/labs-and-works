#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Программа проверит, есть ли хотя бы одно положительное число из трёх" << endl;
    int a, b, c;
    cout << "Введите три числа:" << endl;
    cin >> a >> b >> c;

    if (a > 0 || b > 0 || c > 0) {
        cout << "Есть" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return 0;
}
