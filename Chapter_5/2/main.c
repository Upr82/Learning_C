#include <stdio.h>
#include <windows.h>
#define SQARES 64

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double current=0.5, total=0.0;
    int i=1;
    printf("������� ����� ������� ����� ����� ������� �������:\n");
    printf("� ������    ����� �� ������        ����� �����\n");
    while (i <= SQARES)
    {
        current = current*2.0;
        total=total+current;

        printf("%-12d%-23.f%-23.f\n", i, current, total);
        i++;
    }
    printf("��� � ��.");
    getchar();
    getchar();


    return 0;
}
