#include <iostream>
#include <windows.h>
using namespace std;

int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
double meters, centimeters, gallons, liters;
int choice;
cout << "eConverter" << endl;
cout << "update 2.0" << endl;
cout << endl;
cout << "ƒл€ выбора действи€ нажмите:" << endl;
cout << "1 - метры в сантиметры." << endl;
cout << "2 - сантиметры в метры." << endl;
cout << "3 - галлоны в литры." << endl;
cout << "4 - литры в галлоны." << endl;
cout << endl;
cin >> choice;
cout << endl;

switch(choice) {
case 1:
    cout << "¬ведите количество метров:" << endl;
    cin >> meters;
    cout << meters * 100 << " сантиметр(ов)" << endl;
    break;
case 2:
    cout << "¬ведите количество сантиметров:" << endl;
    cin >> centimeters;
    cout << centimeters / 100 << " метр(ов)" << endl;
    break;
case 3:
    cout << "¬ведите количество галлонов:" << endl;
    cin >> gallons;
    cout << gallons * 4 << " литр(ов)" << endl;
    break;
case 4:
    cout << "¬ведите количество литров:" << endl;
    cin >> liters;
    cout << liters / 4 << " галлонов(ов)" << endl;
    break;
default:
    cout << "ERROR" << endl;
}
return 0;
}
