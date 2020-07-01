#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout<<"Вычисление скалярного произведения двух векторов размера n"<<endl;
	cout << "Введите Размер векторов" << endl;

	int n; 
	cin >> n;

	double a[sizeof(n)];

	double b[sizeof(n)];

	double res = 0;

	cout << "a = ";
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << "b = ";
	for (int i = 0; i < n; i++) cin >> b[i];

	for (int i = 0; i < n; i++) res += a[i] * b[i];

	cout << "a.b = " << res << endl;
	return 0;
}