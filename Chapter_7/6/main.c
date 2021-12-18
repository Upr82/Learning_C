#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define RATE1 0.13230// меньше 360 за 1 к¬т/ч
#define RATE2 0.15040// за последующие 180 к¬т/ч
#define RATE3 0.30025// за последующие 252 к¬т/ч
#define RATE4 0.34025// свыше 720
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
    printf("¬ведите количество потреблЄнной энергии(дл€ выхода q): ");
    while(scanf("%lf", &kwh)==1)
    {
        if (kwh<=BREAK1) bill=RATE1*kwh;
        else if (kwh<=BREAK2) bill=BASE1 + (RATE2*(kwh-BREAK1));
        else if (kwh<=BREAK3) bill=BASE2 + (RATE3*(kwh-BREAK2));
        else bill=BASE3 + (RATE4*(kwh-BREAK3));
        printf("«а %g к¬т/ч вы должны заплатить $%g.\n", kwh, bill);

        printf("¬ведите количество потреблЄнной энергии(дл€ выхода q): ");

    }



    return 0;
}
