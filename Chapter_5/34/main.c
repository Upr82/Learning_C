#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAGIC_NUMBER 13

int number;

int main(void)
{
    SetConsoleOutputCP(1251);
    printf("Угадай число!\n");
    printf("Введите число: ");
    scanf("%d", &number);
    while (number != MAGIC_NUMBER)
    {
        printf("Нет, не правильно, введите число: ");
        scanf("%d", &number);
    }
    printf("Теперь правильно!");

    return 0;
}
