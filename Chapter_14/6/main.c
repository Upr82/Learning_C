#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_SIZE 20

struct name
{
    char first[NAME_SIZE];
    char second[NAME_SIZE];
};



struct my_friend
{
    struct name b_b;
    float weight;
    int age;
};

int main()
{
    system("chcp 1251");

    struct my_friend boobs =

    {
        {"�����", "�����"},
         125.99, 38
    };

    /*struct name b_b =
{
    "�����",
    "�����"
};*/

    boobs.weight=99.999;
    boobs.age=99;

    boobs.age=18;

    strncpy(boobs.b_b.first,"���� ����",NAME_SIZE-1);

    printf("���: %s\n", boobs.b_b.first);
    printf("���: %s\n", boobs.b_b.second);
    printf("���: %.2f\n", boobs.weight);
    printf("�������: %d\n", boobs.age);

    /*strncpy(b_b.first,"���� ����",NAME_SIZE-1);
    strncpy(b_b.second, "���� �����", NAME_SIZE-1);*/


    return 0;
}
