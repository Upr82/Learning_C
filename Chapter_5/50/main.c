#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int a,b,c;
long long d,e;

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ��� ����� ������������� �����, ����� �������, ����� �������: ");
    scanf("%d %d", &a, &b);
    for (c=a;c<=b;c++)
    {
        d = c*c;
        e = c*c*c;
        printf("����� = %5d, ����� � �������� = %8lld, ����� � ���� = %10lld\n", c, d, e);
    }




    return 0;
}
