#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    double sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;   // додаємо 1/i
        cout << "b" << i << " = " << sum << endl;
    }

    return 0;
}