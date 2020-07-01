#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void sortArr(int** arr, int n)
{
    int temp;
    for (int j = 0; j != n; j++)
    {
        if ((j + 1) % 2 == 0)
        {
            for (int i = 0; i != n; i++)
            {
                int pos = i;
                temp = arr[i][j];
                for (int k = i + 1; k != n; k++)
                {
                    if (arr[k][j] < temp)
                    {
                        temp = arr[k][j];
                        pos = k;
                    }
                }
                arr[pos][j] = arr[i][j];
                arr[i][j] = temp;

            }

        }
        else
        {
            for (int i = 0; i != n; i++)
            {
                int pos = i;
                temp = arr[i][j];
                for (int k = i + 1; k != n; k++)
                {
                    if (arr[k][j] > temp)
                    {
                        temp = arr[k][j];
                        pos = k;
                    }
                }
                arr[pos][j] = arr[i][j];
                arr[i][j] = temp;

            }

        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Отсортировать каждый столбец с четным номером по неубыванию, а каждый столбец с нечетным номером - по невозрастанию." << endl;

    srand(time(NULL));
    int** arr;
    const int n = 10;
    arr = new int* [n];
    for (int i = 0; i != n; i++)
        arr[i] = new int[n];

    for (int i = 0; i != n; i++)
    {
        for (int j = 0; j != n; j++)
        {
            arr[i][j] = rand() % 50;
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    sortArr(arr, n);
    for (int i = 0; i != n; i++)
    {
        for (int j = 0; j != n; j++)
        {

            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}