
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите количество секунд. Программа посчитает, сколько это часов: " << endl;
    int n; cin >> n;

    cout << "Часов прошло:" << n / 3600 << endl;

    return 0;
}

