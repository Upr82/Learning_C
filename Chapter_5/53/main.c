#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
float a,b,c;
float func (float x, float y);

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ��� ����� � ��������� ������(q ��� ������):");
    while (scanf("%f%f", &a, &b)==2)
    {
        printf("(%g-%g)/(%g*%g)=%g\n", a, b, a, b, func(a,b));
        printf("������� ��� ����� � ��������� ������(q ��� ������):");
    }

    return 0;
}

double func (float x, float y)
{
    return (x-y)/(x*y);
}
