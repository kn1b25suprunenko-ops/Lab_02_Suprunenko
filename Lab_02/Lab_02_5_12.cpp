#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть номер кварталу (1-4): ";
    cin >> n;

    switch(n) {
        case 1:
            cout << "Січень, Лютий, Березень";
            break;
        case 2:
            cout << "Квітень, Травень, Червень";
            break;
        case 3:
            cout << "Липень, Серпень, Вересень";
            break;
        case 4:
            cout << "Жовтень, Листопад, Грудень";
            break;
        default:
            cout << "Помилка! Квартал повинен бути від 1 до 4.";
    }

    return 0;
}