#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float depositA = 100.0, depositN = 100.0;
const float stavkaA = 10.0, stavkaN = 1.05;

int i;

int main()
{
    SetConsoleOutputCP(1251);
    printf("����� ������� �� ����� $100  ��� ������� 10%%,\n");
    printf("� ������ �������� $100  ��� ������� 5%%.\n");
    printf("����� ������� ��� ����� �� ����� ������, ��������\n");
    printf("����� �� ����� ������. ����� ��� ����� �����?\n");

    for (i=1; depositA>= depositN;i++)
    {
        depositA += stavkaA;
        depositN *= stavkaN;
        printf("����� %2d ���� (���) ������� ������ = $%g, ������� ������ = $%g\n", i,
               depositA, depositN);
    }






    return 0;
}
