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
cout << "��� ������ �������� �������:" << endl;
cout << "1 - ����� � ����������." << endl;
cout << "2 - ���������� � �����." << endl;
cout << "3 - ������� � �����." << endl;
cout << "4 - ����� � �������." << endl;
cout << endl;
cin >> choice;
cout << endl;

switch(choice) {
case 1:
    cout << "������� ���������� ������:" << endl;
    cin >> meters;
    cout << meters * 100 << " ���������(��)" << endl;
    break;
case 2:
    cout << "������� ���������� �����������:" << endl;
    cin >> centimeters;
    cout << centimeters / 100 << " ����(��)" << endl;
    break;
case 3:
    cout << "������� ���������� ��������:" << endl;
    cin >> gallons;
    cout << gallons * 4 << " ����(��)" << endl;
    break;
case 4:
    cout << "������� ���������� ������:" << endl;
    cin >> liters;
    cout << liters / 4 << " ��������(��)" << endl;
    break;
default:
    cout << "ERROR" << endl;
}
return 0;
}
