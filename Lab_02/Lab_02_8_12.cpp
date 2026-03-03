#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    double x;
    cout << "Введіть x: ";
    cin >> x;

    double a[1000];   // достатній розмір масиву
    cout << "Введіть елементи масиву:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;

    for(int i = 0; i + 1 < n; i += 2) {
        if(a[i + 1] != 0) {
            double value = a[i] / a[i + 1];

            // для дійсних чисел краще порівнювати з похибкою
            if (fabs(value - x) < 1e-9) {
                count++;
            }
        }
    }

    cout << "Кількість входжень: " << count << endl;

    return 0;
}