#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, F;

    cout << "Введіть a, b, c, x: ";
    cin >> a >> b >> c >> x;

    if (a < 0 && x != 0) {
        F = a * x * x + b * b * x;
    }
    else if (a > 0 && x == 0) {
        if (c != 0) {
            F = x - a / (x - c);  // при x=0 це буде a/c
        } else {
            cout << "Помилка: ділення на нуль!" << endl;
            return 1;
        }
    }
    else {
        if (c != 0) {
            F = 1 + x / c;
        } else {
            cout << "Помилка: ділення на нуль!" << endl;
            return 1;
        }
    }

    cout << "F = " << F << endl;

    return 0;
}