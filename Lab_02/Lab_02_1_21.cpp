#include <iostream>
using namespace std;

int main() {
    double S;
    double T;
    
    cout << "Введіть відстань (км): ";
    cin >> S;
    
    cout << "Введіть час (хв): ";
    cin >> T;
    
    double hours = T / 60.0;
    
    double speed = S / hours;
    
    cout << "Середня швидкість: " << speed << " км/год" << endl;
    
    if (speed > 60) {
        cout << "Водій порушив правила дорожнього руху." << endl;
    } else {
        cout << "Порушення не зафіксовано." << endl;
    }

    return 0;
}