#include <stdio.h>
#include <windows.h>
#define FIRST 0.15
#define SECOND 0.2
#define LAST 0.25
#define HIGH_PAY 1.5

int hours,i,status;
float many, bill, BASE_PAY;
char menu;
char get_first(void);

int main(void)
{
    SetConsoleOutputCP(1251);
    for (i=0;i<=40;i++) printf("*");
    printf("\nВыберите тарифную ставку или 5 для выхода:\n");
    printf("a) $8.75/ч        b) $9.33/ч\n");
    printf("c) $10.00/ч       d) $11.20/ч\n");
    printf("q) Выход\n");
    for (i=0;i<=40;i++) printf("*");
    printf("\n");
    menu=get_first();


    while(menu!='q')
    {
        switch (menu)
        {
            case 'a':
                    BASE_PAY=8.75;
                    break;
            case 'b':
                    BASE_PAY=9.33;
                    break;
            case 'c':
                    BASE_PAY=10.00;
                    break;
            case 'd':
                    BASE_PAY=11.20;
                    break;

        }



        printf("Введите количество отработанных часов за текущую неделю: ");
        scanf("%d", &hours);

        while(getchar()!='\n')
        continue;

        if (hours<=40) many=BASE_PAY*(hours);
        else many=BASE_PAY*40+HIGH_PAY*BASE_PAY*(hours-40);
        if (many<=300) bill=many*FIRST;
        else if (many<=450) bill=300*FIRST+(many-300)*SECOND;
        else bill=300*FIRST+150*SECOND+(many-450)*LAST;
        printf("Начислено %.2f$, налог %.2f$, на руки %.2f$.\n", many, bill, many-bill);

        for (i=0;i<=40;i++) printf("*");
        printf("\nВыберите тарифную ставку или 5 для выхода:\n");
        printf("a) $8.75/ч        b) $9.33/ч\n");
        printf("c) $10.00/ч       d) $11.20/ч\n");
        printf("q) Выход\n");
        for (i=0;i<=40;i++) printf("*");
        printf("\n");
        menu=get_first();
    }
    return 0;
}

char get_first(void)
{
    char ch;

    while((ch=getchar())<'a' || (ch>'d' && ch!='q'))
    {
        while((ch=getchar())!='\n')
        putchar(ch);
        printf("\nОшибка! Введите правильный пункт: ");
    }
    while(getchar()!='\n')
        continue;

    return ch;
}
