#include <stdio.h>
#include <windows.h>

float widht, lenght;

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("Введите длину прямоугольника: ");
    while (scanf("%f", &lenght)==1)
    {
        printf("Длина = %g \n", lenght);
        printf("Введите ширину прямоугольника: ");
        if (scanf("%f", &widht)!=1) break;
        printf("Ширина = %g\n", widht);
        printf("Площадь прямоугольника = %.1f.", lenght*widht);
    }

    return 0;
}
