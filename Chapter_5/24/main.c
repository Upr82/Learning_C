#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long sum = 0L;
long num;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� �������� ����� �����.\n");
    printf("������� ����� (��� q ��� ������): ");
    while (scanf("%ld", &num)==1)
    {
        sum = sum + num;
        printf("������� ����� (��� q ��� ������): ");
    }
    printf("����� �������� ����� = %ld.\n", sum);


    return 0;
}
