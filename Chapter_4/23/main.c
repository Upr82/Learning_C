#include <stdio.h>
#include <windows.h>
#include <float.h>

float f1,f2,f3;
double d1, d2, d3;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введите два числа типа float:");
    scanf("%f %f", &f1, &f2);
    f3 = f1/f2;
    printf("Введите два числа типа double:");
    scanf("%lf %lf", &d1, &d2);
    d3 = d1/d2;
    printf("Для типа float: f1/f2 = %.4f, %.12f, %.16f\n", f3, f3, f3);
    printf("Для дипа double: d1/d2 = %.4f, %.12f, %.16f\n", d3, d3, d3);

    printf ("Минимальное количество значащих цифр в float = %u\n", FLT_DIG);
    printf ("Минимальное количество значащих цифр в double = %u\n", DBL_DIG);




    return 0;
}
