#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double i;

void qube (double n);

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа возведения числа в куб.\n");
    printf("Введите число с точкой: ");
    scanf("%lf", &i);
    qube(i);

    return 0;
}

void qube (double n)
{
    printf("Число %f, возведенное в третью степень = %f.\n", n, n*n*n);
}
