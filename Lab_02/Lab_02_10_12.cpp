#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;
    double sum = 0.0;

    cout << "Введіть n та x: ";
    cin >> n >> x;

    for (int k = 1; k <= n; k++) {
        sum += pow(k, x);
    }

    cout << "Сума = " << sum << endl;

    return 0;
}