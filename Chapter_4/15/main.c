#include <stdio.h>
#include <windows.h>

int a;
float b;
char name [40];


int main (void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    printf("������� ���� �������, ��� � ���:");
    scanf("%d %f %s", &a, &b, name);
    printf("���: %s, ���: %.1f, ���: %d", name, b, a);




    return 0;
}
