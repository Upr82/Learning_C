#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int MAGIC_NUMBER = 13;
int number;

int main(void)
{
    SetConsoleOutputCP(1251);
    printf("Угадай магическое число!\n");
    do
    {
        printf("Введите целое число: ");
        scanf("%d", &number);

    } while(number != MAGIC_NUMBER);
    printf("Правильно!");


    return 0;
}
