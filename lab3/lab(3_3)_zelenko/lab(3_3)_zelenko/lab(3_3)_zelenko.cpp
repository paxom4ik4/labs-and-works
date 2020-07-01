#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b; 

    cout << "Программа расчитает рассходы студента (10 месяцев)" << endl;
    cout << "Введите стипендию и рассходы (месяц)" << endl;

    cout << "Стипендия (р): "; cin >> a;
    cout << "Рассходы (р): "; cin >> b;

    double all1 = a * 10;
    double all2 = 0;

    for (int i = 0; i < 10; i++) {
        all2 += b;
        b = b * 1.03;
    }

    cout << "Стипендия за 10 мес: "<< all1 << endl;
    cout << "Расходы за 10 мес: " << all2 << endl;
    if (all2 > all1) {
        cout << "Нехватает: " << all2 - all1 << endl;
    }

    return 0;
}
