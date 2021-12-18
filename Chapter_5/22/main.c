#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double faren;
int symbol;
void temperatures (double n);

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа перевода температуры из Фаренгейта в Цельсий и Кельвин.\n");
    printf("Введите температуру в градусах Фаренгейта: ");
    scanf("%lf", &faren);
    temperatures(faren);
    printf("Введите температуру в градусах Фаренгейта (для выхода введите q: ");
    symbol=scanf("%lf", &faren);
    while (symbol==1)
    {
     temperatures(faren);
     printf("Введите температуру в градусах Фаренгейта (для выхода введите q: ");
     symbol=scanf("%lf", &faren);
    }



    return 0;
}

void temperatures (double n)
{
    double cels, kelvin;
    cels = (5.0/9.0)*(n-32.0);
    kelvin = cels + 273.16;
    printf("%.2f по фаренгейту это %.2f по Цельсию или %.2f по Кельвину.\n\n",
           n, cels, kelvin);
}
