#include <iostream>
#include <windows.h>
using namespace std;

int main () {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
double a, b, c, x;
cout << "������� ������ ������ ����������(� ������) �� 100 ��." << endl;
cin >> a;// 8
cout << "������� ���������� �� ����������� ���� ���� �������" << endl;
cin >> b;// 40
cout << "������� ��c������� ������� ��� ����� ��������(� ����������)" << endl;
cin >> c;// 90
x = b*(a/100*c);
cout << "��� ����� ��������� " << x << " ������" << endl;
return 0;
}
