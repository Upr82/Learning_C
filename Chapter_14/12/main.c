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
        {"�����","����"},
        38,
        99.9
    };
    struct guy sea = sag;

    printf("%-20s %s\n", "���:", sag.fio.first);
    printf("%-20s %s\n", "�������:", sag.fio.second);
    printf("%-20s %d\n", "�������:", sag.age);
    printf("%-20s %g\n", "�������:", sag.rating);

    strncpy(sea.fio.first, "����", NAME_SIZE);

    printf("%-20s %s\n", "���:", sea.fio.first);
    printf("%-20s %s\n", "�������:", sea.fio.second);
    printf("%-20s %d\n", "�������:", sea.age);
    printf("%-20s %g\n", "�������:", sea.rating);

    printf("Hello world!\n");
    return 0;
}
