#include <stdio.h>
#include <windows.h>
#define FIRST 0.15
#define SECOND 0.2
#define LAST 0.25
#define HIGH_PAY 1.5

int hours,i,menu,status;
float many, bill, BASE_PAY;

int main(void)
{
    SetConsoleOutputCP(1251);
    for (i=0;i<=40;i++) printf("*");
    printf("\n�������� �������� ������ ��� 5 ��� ������:\n");
    printf("1) $8.75/�        2) $9.33/�\n");
    printf("3) $10.00/�       4) $11.20/�\n");
    printf("5) �����\n");
    for (i=0;i<=40;i++) printf("*");
    printf("\n");
    scanf("%d", &menu);
    while(menu)
    {
        if (menu==5) break;
        if (menu>5)
        {
            printf("������� ���������� ��������!\n");
            scanf("%d", &menu);
            continue;
        }
        switch (menu)
        {
            case 1:
                    BASE_PAY=8.75;
                    break;
            case 2:
                    BASE_PAY=9.33;
                    break;
            case 3:
                    BASE_PAY=10.00;
                    break;
            case 4:
                    BASE_PAY=11.20;
                    break;

        }



        printf("������� ���������� ������������ ����� �� ������� ������: ");
        scanf("%d", &hours);

        if (hours<=40) many=BASE_PAY*(hours);
        else many=BASE_PAY*40+HIGH_PAY*BASE_PAY*(hours-40);
        if (many<=300) bill=many*FIRST;
        else if (many<=450) bill=300*FIRST+(many-300)*SECOND;
        else bill=300*FIRST+150*SECOND+(many-450)*LAST;
        printf("��������� %.2f$, ����� %.2f$, �� ���� %.2f$.\n", many, bill, many-bill);

        for (i=0;i<=40;i++) printf("*");
        printf("\n�������� �������� ������ ��� 5 ��� ������:\n");
        printf("1) $8.75/�        2) $9.33/�\n");
        printf("3) $10.00/�       4) $11.20/�\n");
        printf("5) �����\n");
        for (i=0;i<=40;i++) printf("*");
        printf("\n");
        scanf("%d", &menu);

    }



    return 0;
}
