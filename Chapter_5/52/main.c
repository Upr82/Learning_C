#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
float a,b,c;

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ��� ����� � ��������� ������(q ��� ������):");
    while (scanf("%f%f", &a, &b)==2)
    {
        c = (a-b)/(a*b);
        printf("(%g-%g)/(%g*%g)=%g\n", a, b, a, b, c);
        printf("������� ��� ����� � ��������� ������(q ��� ������):");
    }




    return 0;
}
