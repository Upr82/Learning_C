#include <iostream>
#include <windows.h>
using namespace std;


void peregruzoper();

int main()
{
 SetConsoleOutputCP(1251);
 cout << "Случаи перегрузки операторов\n";
 peregruzoper();
 return 0;
}

void peregruzoper()
{
 SetConsoleOutputCP(1251);
 cout << "Целочисленное деление: 9 / 5 = " << 9 / 5 << endl;
 cout << "Смешанное деление: 9.0 / 5 = " << 9.0 / 5 << endl;
 cout << "double: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
 cout << "float: 9.0f / 5.0f = " << 9.0f / 5.0f << endl;
}
