#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double power (double mant, int exp);
double main_mant;
int main_exp;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� ���������� ����� � ��������� ������ � ����� �������.\n");
    printf("��� ���������� ������� ��� ����� (��� ������ q):");

    while (scanf("%lf%d", &main_mant, &main_exp)==2)
    {
        printf("��� ���������� %3g � ������� %d, ��������� = %.5g.\n",main_mant,
               main_exp, power(main_mant, main_exp));
        printf("��� ���������� ������� ��� ����� (��� ������ q):");
    }
    printf("����� - ���� �����!\n");


    return 0;
}

double power (double mant, int exp)
{
    double result = mant;
    int i;
    for (i=1; i<exp; i++)
    {
        result*= mant;
    }

    return result;
}
