#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int day, total, rate;

int main()
{
    SetConsoleOutputCP(1251);
    total=0;
    rate=1;
    printf("������ ����, ���������� ������ ������������� �� 1$/\n");
    printf("������� ����� ���� ������: ");
    scanf("%d", &day);
    while (rate<=day)
    {
        total = total + rate*rate;
        printf("� ���� �%-3d ��� ��������� = $%-8d, ����� ��������� = $%-9d.\n", rate, rate*rate, total);
        rate++;
    }
    return 0;
}
