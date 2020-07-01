#include <iostream>
#include "string"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Находим максимальное количество пробелов" << endl;
	
	string arr[3][3] = {
		"","","a",
		"","","b",
		"b","","f"
	};

	int max = 0;
	int kol = 0;

	for (int i = 0; i < 3; i++){
		int index = 0;
		for (int j = 0; j < 3; j++) {
			
			if (arr[i][j] == "") {
				index += 1;
			}
			if (index > max) {
				kol += 1;
				max = index;
			}
			
		}
	}
	cout << kol << " строки имеют максимальное количество пробелов " << max << endl;

	return 0;
}

