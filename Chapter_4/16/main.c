#include <stdio.h>
#include <windows.h>


int main (void)
{
    unsigned width, precision;
    int number = 256;
    int b;
    float a = 123.4567;

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("Введите ширину поля для целого числа: ");
    scanf("%u", &width);
    printf("Число number = %0*d\n", width, number);
    printf("Ввеите ширину поля и точность для числа с плавающей точкой: ");
    b = scanf("%u %u", &width, &precision);
    printf("Число а = %0*.*f\n", width, precision, a);

    printf("Число считанных символов последнего ввода = %d", b);




    return 0;
}
