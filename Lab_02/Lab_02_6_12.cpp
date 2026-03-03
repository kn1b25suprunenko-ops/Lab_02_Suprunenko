#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    double a, sum = 0;

    for(int i = 1; i <= n; i++) {
        cout << "Введіть a" << i << ": ";
        cin >> a;
        sum += sqrt(abs(a));
    }

    cout << "Результат: " << sum << endl;

    return 0;
}