#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите число от 1 до 365 и программа определит на какой месяц выпадает это число" << endl; 
	int n; cin >> n;

	if (n > 0 && n <= 31) {
		cout << "Январь" << endl;
	}
	else if (n > 31 && n <= 59) {
		cout << "Февраль" << endl;
	}
	else if (n > 59 && n <= 90) {
		cout << "Март" << endl;
	}
	else if (n > 90 && n <= 120) {
		cout << "Апрель" << endl;
	}
	else if (n > 120 && n <= 151) {
		cout << "Май" << endl;
	}
	else if (n > 151 && n <= 181) {
		cout << "Июнь" << endl;
	}
	else if (n > 181 && n <= 212) {
		cout << "Июль" << endl;
	}
	else if (n > 212 && n <= 242) {
		cout << "Август" << endl;
	}
	else if (n > 242 && n <= 273) {
		cout << "Сентябрь" << endl;
	}
	else if (n > 273 && n <= 303) {
		cout << "Октябрь" << endl;
	}
	else if (n > 303 && n <= 334) {
		cout << "Ноябрь" << endl;
	}
	else if (n > 334 && n <= 365) {
		cout<<"Декабрь"<<endl;
	}

	return 0;
}

