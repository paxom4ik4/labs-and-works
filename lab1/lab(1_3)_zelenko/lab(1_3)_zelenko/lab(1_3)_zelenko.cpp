#include <iostream>
#include <cmath>

using namespace std;

void func(double square) {
    double PI = 3.14;
    double D = sqrt((pow(square, 4)) / PI);
    double L = PI * D;

    cout << "Диаметр: " << D  << "\nДлина: " << L << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Программа найдет диаметр и длину окружности" << endl;
    cout << "Введите площадь круга" << endl;
    double square; cin >> square;
    func(square);

    return 0;
}

