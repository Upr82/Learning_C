#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define RATE1 0.13230// ������ 360 �� 1 ���/�
#define RATE2 0.15040// �� ����������� 180 ���/�
#define RATE3 0.30025// �� ����������� 252 ���/�
#define RATE4 0.34025// ����� 720
#define BREAK1 360
#define BREAK2 468
#define BREAK3 720
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1 + (RATE2*(BREAK2-BREAK1)))
#define BASE3 (BASE2 + (RATE3*(BREAK3-BREAK2)))

double kwh, bill;

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ���������� ����������� �������(��� ������ q): ");
    while(scanf("%lf", &kwh)==1)
    {
        if (kwh<=BREAK1) bill=RATE1*kwh;
        else if (kwh<=BREAK2) bill=BASE1 + (RATE2*(kwh-BREAK1));
        else if (kwh<=BREAK3) bill=BASE2 + (RATE3*(kwh-BREAK2));
        else bill=BASE3 + (RATE4*(kwh-BREAK3));
        printf("�� %g ���/� �� ������ ��������� $%g.\n", kwh, bill);

        printf("������� ���������� ����������� �������(��� ������ q): ");

    }



    return 0;
}
