#include <stdio.h>
#include <windows.h>


int main (void)

{
    float h;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������� ����� � ��������� ������:");
    scanf("%f", &h);
    printf("�����: %.1f ��� %.1e\n", h, h);
    printf("�����: %+.3f ��� %.3E", h, h);





    return 0;
}
