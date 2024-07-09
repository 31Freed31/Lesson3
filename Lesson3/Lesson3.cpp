#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    string stop1 = "Улица программистов";
    string stop2 = "Проспект алгоритмов";
    string stop3 = "Бульвар разработчиков";
    string stop4 = "Площадь кода";

    int ticketPrice = 20;
    int passengers = 0;
    int totalEarnings = 0;

    cout << "Прибываем на остановку \"" << stop1 << "\". В салоне пассажиров: " << passengers << endl;
    int exited, entered;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> exited;
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> entered;
    passengers = passengers - exited + entered;
    totalEarnings += entered * ticketPrice;
    cout << "Отправляемся с остановки \"" << stop1 << "\". В салоне пассажиров: " << passengers << endl;
    cout << "-----------Едем---------" << endl;

    cout << "Прибываем на остановку \"" << stop2 << "\". В салоне пассажиров: " << passengers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> exited;
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> entered;
    passengers = passengers - exited + entered;
    totalEarnings += entered * ticketPrice;
    cout << "Отправляемся с остановки \"" << stop2 << "\". В салоне пассажиров: " << passengers << endl;
    cout << "-----------Едем---------" << endl;

    cout << "Прибываем на остановку \"" << stop3 << "\". В салоне пассажиров: " << passengers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> exited;
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> entered;
    passengers = passengers - exited + entered;
    totalEarnings += entered * ticketPrice;
    cout << "Отправляемся с остановки \"" << stop3 << "\". В салоне пассажиров: " << passengers << endl;
    cout << "-----------Едем---------" << endl;

    cout << "Прибываем на остановку \"" << stop4 << "\". В салоне пассажиров: " << passengers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> exited;
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> entered;
    passengers = passengers - exited + entered;
    totalEarnings += entered * ticketPrice;
    cout << "Отправляемся с остановки \"" << stop4 << "\". В салоне пассажиров: " << passengers << endl;

    cout << "Всего заработали: " << totalEarnings << " руб." << endl;
    double driverSalary = totalEarnings * 0.25;
    double fuelCosts = totalEarnings * 0.20;
    double taxes = totalEarnings * 0.20;
    double maintenanceCosts = totalEarnings * 0.20;
    double netIncome = totalEarnings - (driverSalary + fuelCosts + taxes + maintenanceCosts);

    cout << "Зарплата водителя: " << driverSalary << " руб." << endl;
    cout << "Расходы на топливо: " << fuelCosts << " руб." << endl;
    cout << "Налоги: " << taxes << " руб." << endl;
    cout << "Расходы на ремонт машины: " << maintenanceCosts << " руб." << endl;
    cout << "Итого доход: " << netIncome << " руб." << endl;

    return 0;
}



