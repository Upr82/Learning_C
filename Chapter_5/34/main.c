#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAGIC_NUMBER 13

int number;

int main(void)
{
    SetConsoleOutputCP(1251);
    printf("������ �����!\n");
    printf("������� �����: ");
    scanf("%d", &number);
    while (number != MAGIC_NUMBER)
    {
        printf("���, �� ���������, ������� �����: ");
        scanf("%d", &number);
    }
    printf("������ ���������!");

    return 0;
}
