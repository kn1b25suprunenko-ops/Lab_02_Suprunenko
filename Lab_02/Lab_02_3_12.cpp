#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введіть x та y: ";
    cin >> x >> y;

    bool insideCircle = (x * x + y * y <= 4);
    bool upperHalf = (y >= 0);
    bool insideRhombus = (abs(x) + abs(y) <= 1);

    if (insideCircle && (upperHalf || insideRhombus)) {
        cout << "Точка належить зафарбованій області." << endl;
    } else {
        cout << "Точка не належить зафарбованій області." << endl;
    }

    return 0;
}