#include <stdio.h>
#include <windows.h>

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name [40];
    float h;

    printf("������� ��� ���� � ����������� � ���:");
    scanf("%f %s", &h, name);
    printf("%s, ��� ���� %.2f �����.", name, h/100);



    return 0;
}
