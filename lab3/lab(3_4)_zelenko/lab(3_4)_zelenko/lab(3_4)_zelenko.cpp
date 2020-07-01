#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    
    int A;
    int i = 2;

    cout << "Введите A: ";
    cin >> A;

    double sum = 1;
    while (sum < A)
    {
        sum = sum + 1 / (i * 1.0);
        if (sum >= A)
        {
            sum = sum - 1 / (i * 1.0);
            break;
        }
        i++;
    }
    cout << "Наибольшее N = " << i << "\n";
    cout << "Сумма = " << sum;

    return 0;
}