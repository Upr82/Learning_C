#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int MAGIC_NUMBER = 13;
int number;

int main(void)
{
    SetConsoleOutputCP(1251);
    printf("������ ���������� �����!\n");
    do
    {
        printf("������� ����� �����: ");
        scanf("%d", &number);

    } while(number != MAGIC_NUMBER);
    printf("���������!");


    return 0;
}
