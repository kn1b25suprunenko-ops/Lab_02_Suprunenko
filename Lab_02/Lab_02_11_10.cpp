#include <iostream>
#include <cmath>
using namespace std;

double arctg_series(double x, double eps)
{
    if (x >= -1)
        throw invalid_argument("Формула працює тільки для x < -1");

    double sum = 0.0;
    double term;
    int n = 0;

    do {
        term = pow(-1, n + 1) / ((2 * n + 1) * pow(x, 2 * n + 1));
        sum += term;
        n++;
    } while (fabs(term) >= eps);

    return -M_PI / 2 + sum;
}

int main()
{
    double x, eps;

    cout << "Введіть x (< -1): ";
    cin >> x;

    cout << "Введіть точність ε: ";
    cin >> eps;

    try {
        double result = arctg_series(x, eps);

        cout << "Обчислене значення: " << result << endl;
        cout << "Перевірка atan(x):  " << atan(x) << endl;
    }
    catch (const exception& e) {
        cout << "Помилка: " << e.what() << endl;
    }

    return 0;
}