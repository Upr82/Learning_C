#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double i;

void qube (double n);

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� ���������� ����� � ���.\n");
    printf("������� ����� � ������: ");
    scanf("%lf", &i);
    qube(i);

    return 0;
}

void qube (double n)
{
    printf("����� %f, ����������� � ������ ������� = %f.\n", n, n*n*n);
}
