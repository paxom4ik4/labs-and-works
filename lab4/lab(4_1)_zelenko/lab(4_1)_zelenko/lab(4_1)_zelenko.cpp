#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Поиск наименьшего элемента первого массива, который не входит во второй массив" << endl;



    int a[10], b[10];
    cout << "Первый массив:\n ";
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << "Второй массив:\n ";
    for (int i = 0; i < 10; i++)
        cin >> b[i];
    int min = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] < min)
                min = a[i];
        }
    }
    cout << "Значение: " << min;
}