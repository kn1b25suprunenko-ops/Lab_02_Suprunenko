#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool odd = (n % 2 != 0);
    bool threeDigit = (n >= 100 && n <= 999);

    if (odd || threeDigit)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
