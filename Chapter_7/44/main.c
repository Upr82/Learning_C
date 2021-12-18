#include <stdio.h>
#include <windows.h>

#define BASE1 17850
#define BASE2 23900
#define BASE3 29750
#define BASE4 14875
#define STAGE1 0.15
#define STAGE2 0.28

int i,cat,profit, base, stage;
float tax;

int main(void)
{
    SetConsoleOutputCP(1251);

    for (i=0;i<50;i++) printf("*");
    printf("\n");

    printf("1) ��������               2) ����� ���������\n");
    printf("3) � �����, ����. ���.    4) � �����, ����. ���.\n");
    printf("0) �����\n");

    for (i=0;i<50;i++) printf("*");
    printf("\n");

    printf("�������� ���� ���������: ");
    scanf("%d", &cat);

    while(cat)
    {


        switch(cat)
        {
        case 1:
            base=BASE1;
            break;
        case 2:
            base=BASE2;
            break;
        case 3:
            base=BASE3;
            break;
        case 4:
            base=BASE4;
            break;
        default:
            printf("������� ���������� ���������: ");
            scanf("%d", &cat);
            continue;
        }

        printf("������� ���������������� �����: ");
        scanf("%d", &profit);

        if (profit<=base) tax=profit*STAGE1;
        else tax=base*STAGE1+(profit-base)*STAGE2;
        printf("����� = %.2f\n", tax);


        for (i=0;i<50;i++) printf("*");
        printf("\n");

        printf("1) ��������               2) ����� ���������\n");
        printf("3) � �����, ����. ���.    4) � �����, ����. ���.\n");
        printf("0) �����\n");

        for (i=0;i<50;i++) printf("*");
        printf("\n");

        printf("�������� ���� ���������: ");
        scanf("%d", &cat);

    }


    return 0;
}
