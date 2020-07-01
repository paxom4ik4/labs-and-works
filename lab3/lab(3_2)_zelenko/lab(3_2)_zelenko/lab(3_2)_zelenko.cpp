#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Программа определит квадраты чисел по формуле" << endl;
    cout << "Введите число N" << endl;
    int n; cin >> n;

    int n2 = 0;
    
    for (int i = 0; i < n; i++)
    {
        n2 = n2 + 2 * i - 1;
        cout <<i << "" << n2 << endl;
    }

    return 0;
}

