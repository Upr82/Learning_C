#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int a,b,sum,i;

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ��� ����� ������������� ����� (������ ����� �.�. ������ �������): ");
    while ((scanf("%d%d", &a, &b)==2) && (a<b))
    {
        for(i=a, sum=0;i<=b;i++) sum += i*i;
        printf("����� ��������� ����� ����� �� %d �� %d ����� %d\n", a*a, b*b, sum);
        printf("������� ��� ����� ������������� ����� (������ ����� �.�. ������ �������): ");
    }



    return 0;
}
