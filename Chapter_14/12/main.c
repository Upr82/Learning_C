#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_SIZE 20

struct names
{
    char first[NAME_SIZE];
    char second[NAME_SIZE];
};

struct guy
{
    struct names fio;
    int age;
    float rating;
};

int main()
{
    system("chcp 1251");

    struct guy sag =
    {
        {"Антон","Шпак"},
        38,
        99.9
    };
    struct guy sea = sag;

    printf("%-20s %s\n", "Имя:", sag.fio.first);
    printf("%-20s %s\n", "Фамилия:", sag.fio.second);
    printf("%-20s %d\n", "Возраст:", sag.age);
    printf("%-20s %g\n", "Рейтинг:", sag.rating);

    strncpy(sea.fio.first, "Егор", NAME_SIZE);

    printf("%-20s %s\n", "Имя:", sea.fio.first);
    printf("%-20s %s\n", "Фамилия:", sea.fio.second);
    printf("%-20s %d\n", "Возраст:", sea.age);
    printf("%-20s %g\n", "Рейтинг:", sea.rating);

    printf("Hello world!\n");
    return 0;
}
