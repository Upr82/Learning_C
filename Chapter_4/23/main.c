#include <stdio.h>
#include <windows.h>
#include <float.h>

float f1,f2,f3;
double d1, d2, d3;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������� ��� ����� ���� float:");
    scanf("%f %f", &f1, &f2);
    f3 = f1/f2;
    printf("������� ��� ����� ���� double:");
    scanf("%lf %lf", &d1, &d2);
    d3 = d1/d2;
    printf("��� ���� float: f1/f2 = %.4f, %.12f, %.16f\n", f3, f3, f3);
    printf("��� ���� double: d1/d2 = %.4f, %.12f, %.16f\n", d3, d3, d3);

    printf ("����������� ���������� �������� ���� � float = %u\n", FLT_DIG);
    printf ("����������� ���������� �������� ���� � double = %u\n", DBL_DIG);




    return 0;
}
