#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Программа найдет минимальный элемент ниже главной диагонали в матрице (двумерный массив)" << endl;

    const int m = 2, n = 3;
    int i, j, min = numeric_limits<int>::max();
    int** A = new int* [m];
    for (i = 0; i < m; i++)
        A[i] = new int[n];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 100 + 1;
            if (i >= j && A[i][j] < min)
                min = A[i][j];
        }
    cout << "В массиве A:";
    for (i = 0; i < m; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
    }
    cout << "\n Минимальный элемент ниже главной диагонали = " << min;

    return 0;
}