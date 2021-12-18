#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long sum = 0L;
long num;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа сложения целых чисел.\n");
    printf("Введите число (или q для выхода): ");
    while (scanf("%ld", &num)==1)
    {
        sum = sum + num;
        printf("Введите число (или q для выхода): ");
    }
    printf("Сумма введённых чисел = %ld.\n", sum);


    return 0;
}
