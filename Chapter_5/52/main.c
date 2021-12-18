#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
float a,b,c;

int main()
{
    SetConsoleOutputCP(1251);
    printf("¬ведите два числа с плавающей точкой(q дл€ выхода):");
    while (scanf("%f%f", &a, &b)==2)
    {
        c = (a-b)/(a*b);
        printf("(%g-%g)/(%g*%g)=%g\n", a, b, a, b, c);
        printf("¬ведите два числа с плавающей точкой(q дл€ выхода):");
    }




    return 0;
}
