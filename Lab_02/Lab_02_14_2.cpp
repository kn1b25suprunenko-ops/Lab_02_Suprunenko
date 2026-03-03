#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int sum = 0;

    for (int x = 10; x <= 99; ++x) {
        int a = x / 10;   // десятки
        int b = x % 10;   // одиниці

        switch (n) {
            case 1: // спадають
                if (a > b) count++;
                break;

            case 2: // зростають
                if (a < b) count++;
                break;

            case 3: // однакова парність
                if ((a % 2) == (b % 2)) count++;
                break;

            case 4: // однакові цифри
                if (a == b) sum += x;
                break;

            case 5: // обидві парні
                if (a % 2 == 0 && b % 2 == 0) sum += x;
                break;

            case 6: // обидві непарні
                if (a % 2 != 0 && b % 2 != 0) sum += x;
                break;
        }
    }

    if (n <= 3)
        cout << count;
    else
        cout << sum;

    return 0;
}
