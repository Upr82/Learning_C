#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 100

int count;
count = MAX+1;

int main()
{
    SetConsoleOutputCP(1251);
    while (--count>0)
    {
        printf("%d, ������� ���������� ���� �� �����,\n", count);
        printf("%d, ������� ���������� ����,\n", count);
        printf("������ ���� � ����� �� �����,\n");
        printf("��������� %d �������!\n\n", count-1);

    }


    return 0;
}
