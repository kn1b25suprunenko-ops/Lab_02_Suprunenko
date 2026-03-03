#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Введіть a, b, c: ";
    cin >> a >> b >> c;

    double value1 = (a + b + c) / 2.0;

    double value2 = sqrt(
        1.0 / (a * a + 1.0) +
        1.0 / (b * b + 1.0) +
        1.0 / (c * c + 1.0)
    );

    double result = min(value1, value2);

    cout << "Результат: " << result << endl;

    return 0;
}