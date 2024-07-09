#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;

    cout << "Перед обменом:\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    int temp = a;
    a = b;
    b = temp;

    cout << "После обмена:\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    return 0;
}
