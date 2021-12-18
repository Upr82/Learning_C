#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double faren;
int symbol;
void temperatures (double n);

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� �������� ����������� �� ���������� � ������� � �������.\n");
    printf("������� ����������� � �������� ����������: ");
    scanf("%lf", &faren);
    temperatures(faren);
    printf("������� ����������� � �������� ���������� (��� ������ ������� q: ");
    symbol=scanf("%lf", &faren);
    while (symbol==1)
    {
     temperatures(faren);
     printf("������� ����������� � �������� ���������� (��� ������ ������� q: ");
     symbol=scanf("%lf", &faren);
    }



    return 0;
}

void temperatures (double n)
{
    double cels, kelvin;
    cels = (5.0/9.0)*(n-32.0);
    kelvin = cels + 273.16;
    printf("%.2f �� ���������� ��� %.2f �� ������� ��� %.2f �� ��������.\n\n",
           n, cels, kelvin);
}
