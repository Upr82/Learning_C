#include <stdio.h>
#include <windows.h>

float widht, lenght;

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("������� ����� ��������������: ");
    while (scanf("%f", &lenght)==1)
    {
        printf("����� = %g \n", lenght);
        printf("������� ������ ��������������: ");
        if (scanf("%f", &widht)!=1) break;
        printf("������ = %g\n", widht);
        printf("������� �������������� = %.1f.", lenght*widht);
    }

    return 0;
}
