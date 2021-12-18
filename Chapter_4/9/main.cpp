#include <iostream>
#include <windows.h>
using namespace std;

int main () {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
double a, b, c, x;
cout << "¬ведите расход своего автомобил€(в литрах) на 100 км." << endl;
cin >> a;// 8
cout << "¬ведите актуальную на сегодн€шний день цену бензина" << endl;
cin >> b;// 40
cout << "¬ведите раcсто€ние которое вам нужно проехать(в километрах)" << endl;
cin >> c;// 90
x = b*(a/100*c);
cout << "¬ам нужно заплатить " << x << " рублей" << endl;
return 0;
}
