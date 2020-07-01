#include <iostream>
#include <cmath>

using namespace std;

double square(int r, double PI) {

	return PI * (pow(r,2));
}

double length(int r, double PI) {
	return 2 * PI * r;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double PI = 3.14;
	cout << "Привет. Данная программа вычислит радиус и длинну окружности, исходя из введенных параметров" << endl;
	cout << "Введите радиус окружности" << endl;
	int r;
	cin >> r;

	cout << "Длина окружности: " << length(r, PI) << endl;

	cout << "Площаль окружности: " << square(r, PI) << endl;

	return 0;
}

