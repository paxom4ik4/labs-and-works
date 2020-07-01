#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Программа определит возраст человека" << endl;
    int curM, curD, curY;
    int bM, bD, bY;

    cout << "Введите дату рождения: " << endl;
    cout << "Месяц: "; cin >> bM;
    cout << "День: "; cin >> bD;
    cout << "Год: "; cin >> bY;
    cout << "Введите текущую дату: " << endl;
    cout << "Месяц: "; cin >> curM;
    cout << "День: "; cin >> curD;
    cout << "Год: "; cin >> curY;

    int differenceY = (curY - bY);
    int differenceM = (curM - bM);

    int difference = (differenceY * 12 + differenceM) / 12;
    cout << "Полных лет: " << difference << endl;
}

