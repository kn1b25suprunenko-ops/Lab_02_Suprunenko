#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double u, v;
    int n;

    cout << "Введіть u, v та n: ";
    cin >> u >> v >> n;

    long double a = u;
    long double b = v;
    long double sum = 0.0;
    long double factorial = 1.0; // для (k+1)!

    for (int k = 1; k <= n; k++) {
        // Обчислюємо (k+1)!
        factorial *= (k + 1);

        // Додаємо до суми
        sum += (a * b) / factorial;

        // Обчислюємо наступні a_k і b_k
        if (k < n) {
            long double next_a = 2 * b + a;
            long double next_b = 2 * a * a + b;

            a = next_a;
            b = next_b;
        }
    }

    cout << "Сума = " << sum << endl;

    return 0;
}