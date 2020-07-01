#include <iostream>
#include "lab(1_2_zelenko.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Проверка числа на 'Трехзначиность'" << endl;
    cout<<"Введите число: "<<endl;
    int num;
    cin >> num;

    if (num > 99 && num < 1000) {
        cout << "Число трехзначное" << endl;
    }
    else if (sizeof(num) == 0) {
        cout << "Вы не ввели число";
    }
    else {
        cout << "Число не является трехзначным" << endl;
    }
    return 0;
}

