#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n = 100;
    double a = 0.1, b = 1.0, h = (b - a) / 10, an, S, Y;

    cout << " x       Y(x)     S(x)\n";
    for (double x = a; x <= b; x += h)
    {
        an = 1.0;
        S = 1.0;
        for (int i = 1; i < n; i++)
        {
            an *= (2 * x) / i;
            S += an;
        }

        Y = (1-(pow(x,2))/2) * cos(x) - (x/2) * sin(x);

        cout << setprecision(2) << fixed << x << "  " << setprecision(6) << Y << "  " << S << endl;
    }

    system("pause");
    return 0;
}