#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int delimoe, delitel;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа выводит остаток от целочисленного деления.\n");
    printf("Сперва введите делитель: ");
    scanf("%d", &delitel);
    printf("Теперь введите делимое: ");
    scanf("%d", &delimoe);
    printf("%d %% %d = %d\n\n", delimoe, delitel, delimoe%delitel);

    printf("Введите следующее число для делимого (<=0 для выхода из\n");
    printf("программы): ");
    scanf("%d", &delimoe);
    while (delimoe>0)
    {
        printf("%d %% %d = %d\n\n", delimoe, delitel, delimoe%delitel);
        printf("Введите следующее число для делимого (<=0 для выхода из\n");
        printf("программы): ");
        scanf("%d", &delimoe);
    }
    printf("Готово!\n");


    return 0;
}
