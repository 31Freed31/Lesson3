#include <iostream>

using namespace std;

int main() {
    int beginHeight;
    int dailyGrowth;
    int nightFade;

    cout << "Введите начальную высоту бамбука (в см): ";
    cin >> beginHeight;
    cout << "Введите ежедневный рост бамбука (в см): ";
    cin >> dailyGrowth;
    cout << "Введите количество бамбука, съедаемого гусеницами за одну ночь (в см): ";
    cin >> nightFade;

    int height = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

    cout << "Высота бамбука к середине третьего дня: " << height << " см" << std::endl;

    return 0;
}
