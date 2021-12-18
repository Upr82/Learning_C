#include <stdio.h>
#include <stdlib.h>
#define LENGHT 50
#define LIM 5

int main()
{
    system("chcp 1251");
    char *my_talents[LIM]={"Быстро считаю.","Знаю язык С.","Выполняю инструкции.",
    "Храню объёмы данных.","Точное умножение."};

    char your_talents[LIM][LENGHT]={"Быстро бегаю.","Хорошо сплю.","Умею плавать.",
    "Жарю картошку.","Вожу автомобиль."};

    int i;
    printf("%-25s %-25s\n", "Мои таланты","твои таланты");
    for(i=0;i<LIM;i++)
        printf("%-25s %-25s\n", my_talents[i], your_talents[i]);

    printf("End!\n");
    return 0;
}
