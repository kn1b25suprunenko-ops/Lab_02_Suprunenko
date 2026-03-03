#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(1, 1); // число = 1 (цифри у зворотному порядку)

    for (int i = 2; i <= n; ++i) {
        int carry = 0;

        for (int j = 0; j < a.size(); ++j) {
            int cur = a[j] * i + carry;
            a[j] = cur % 10;
            carry = cur / 10;
        }

        while (carry) {
            a.push_back(carry % 10);
            carry /= 10;
        }
    }

    // вивід у правильному порядку
    for (int i = a.size() - 1; i >= 0; --i)
        cout << a[i];

    return 0;
}
