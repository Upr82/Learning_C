#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//#include <stdbool.h>

long sum = 0L;
long num;
int status;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� �������� �����\n");
    printf("������� ����� (��� ������ q): ");
    status = (scanf("%ld", &num)==1);
    while (status)
    {
        sum = sum + num;
        printf("������� ����� (��� ������ q): ");
        status = (scanf("%ld", &num)==1);

    }
    printf("����� �������� ����� = %ld.\n", sum);



    return 0;
}