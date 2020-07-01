#include <iostream>
#include <ctime>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	cout << "Введите количество отрезков от 1 до 10" << endl;
	int n;
	cin >> n;
	if (n > 0 && n < 10)
	{
		int* first = new int[n];
		for (int i = 0; i < n; i++)
			first[i] = rand() % 10;
		for (int i = 0; i < n; i++)
			cout << first[i] << " ";
		cout << ".............................." << endl;
		int* second = new int[n];
		for (int i = 0; i < n; i++)
			second[i] = rand() % 10;
		for (int i = 0; i < n; i++)
			cout << second[i] << " ";

		int min = first[0];
		for (int i = 0; i < n; i++) {
			if (min > first[i]) {
				min = first[i];
			}
		}

		int max = second[0];
		for (int i = 0; i < n; i++) {
			if (max > second[i]) {
				max = second[i];
			}
		}

		cout << "Максимальное расстояние: " << max - min << endl;


		return 0;
	}

}