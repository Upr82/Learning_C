#include <stdio.h>
#include <stdlib.h>
#define LENGHT 50
#define LIM 5

int main()
{
    system("chcp 1251");
    char *my_talents[LIM]={"������ ������.","���� ���� �.","�������� ����������.",
    "����� ������ ������.","������ ���������."};

    char your_talents[LIM][LENGHT]={"������ �����.","������ ����.","���� �������.",
    "���� ��������.","���� ����������."};

    int i;
    printf("%-25s %-25s\n", "��� �������","���� �������");
    for(i=0;i<LIM;i++)
        printf("%-25s %-25s\n", my_talents[i], your_talents[i]);

    printf("End!\n");
    return 0;
}
