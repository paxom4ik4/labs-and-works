#include <iostream>
#include <cstdlib>
#include <clocale>
#include <cstdlib>

using namespace std;

void main()
{
    int d, m, y, b;
    setlocale(LC_ALL, "Russian");

    cout << "Введите день(число): ";
    cin >> d;
    cout << "Введите месяц(число): ";
    cin >> m;
    cout << "Введите год(число): ";
    cin >> y;

    switch (d)
    {
    case 1:
        cout << "Предшествующий день: 31" << endl; break;
    case 2:
        cout << "Предшествующий день: 1" << endl; break;
    case 3:
        cout << "Предшествующий день: 2" << endl; break;
    case 4:
        cout << "Предшествующий день: 3" << endl; break;
    case 5:
        cout << "Предшествующий день: 4" << endl; break;
    case 6:
        cout << "Предшествующий день: 5" << endl; break;
    case 7:
        cout << "Предшествующий день: 6" << endl; break;
    case 8:
        cout << "Предшествующий день: 7" << endl; break;
    case 9:
        cout << "Предшествующий день: 8" << endl; break;
    case 10:
        cout << "Предшествующий день: 9" << endl; break;
    case 11:
        cout << "Предшествующий день: 10" << endl; break;
    case 12:
        cout << "Предшествующий день: 11" << endl; break;
    case 13:
        cout << "Предшествующий день: 12" << endl; break;
    case 14:
        cout << "Предшествующий день: 13" << endl; break;
    case 15:
        cout << "Предшествующий день: 14" << endl; break;
    case 16:
        cout << "Предшествующий день: 15" << endl; break;
    case 17:
        cout << "Предшествующий день: 16" << endl; break;
    case 18:
        cout << "Предшествующий день: 17" << endl; break;
    case 19:
        cout << "Предшествующий день: 18" << endl; break;
    case 20:
        cout << "Предшествующий день: 19" << endl; break;
    case 21:
        cout << "Предшествующий день: 20" << endl; break;
    case 22:
        cout << "Предшествующий день: 21" << endl; break;
    case 23:
        cout << "Предшествующий день: 22" << endl; break;
    case 24:
        cout << "Предшествующий день: 23" << endl; break;
    case 25:
        cout << "Предшествующий день: 24" << endl; break;
    case 26:
        cout << "Предшествующий день: 25" << endl; break;
    case 27:
        cout << "Предшествующий день: 26" << endl; break;
    case 28:
        cout << "Предшествующий день: 27" << endl; break;
    case 29:
        cout << "Предшествующий день: 28" << endl; break;
    case 30:
        cout << "Предшествующий день: 29" << endl; break;
    case 31:
        cout << "Предшествующий день: 30" << endl; break;
    }
    switch (m)
    {
    case 1:
        cout << "Предшествующий месяц: декабрь" << endl; break;
    case 2:
        cout << "Предшествующий месяц: январь" << endl; break;
    case 3:
        cout << "Предшествующий месяц:  февраль" << endl; break;
    case 4:
        cout << "Предшествующий месяц: март" << endl; break;
    case 5:
        cout << "Предшествующий месяц: апрель" << endl; break;
    case 6:
        cout << "Предшествующий месяц: май" << endl; break;
    case 7:
        cout << "Предшествующий месяц: июнь" << endl; break;
    case 8:
        cout << "Предшествующий месяц: июль" << endl; break;
    case 9:
        cout << "Предшествующий месяц: август" << endl; break;
    case 10:
        cout << "Предшествующий месяц: сентябрь" << endl; break;
    case 11:
        cout << "Предшествующий месяц: октябрь" << endl; break;
    case 12:
        cout << "Предшествующий месяц: ноябрь" << endl; break;
    }

    system("pause");
}
