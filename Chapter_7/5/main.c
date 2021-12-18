#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const float RATE1 = 0.13230;// меньше 360 за 1 кВт/ч
const float RATE2 = 0.15040;// за последующие 180 кВт/ч
const float RATE3 = 0.30025;// за последующие 252 кВт/ч
const float RATE4 = 0.34025;// свыше 720
const int LIMIT1 = 360;
const int LIMIT2 = 108;
const int LIMIT3 = 252;

float energy;

int diap1, diap2, diap3;

int main()
{
    SetConsoleOutputCP(1251);

    diap1=LIMIT1;
    diap2=LIMIT1+LIMIT2;
    diap3=LIMIT1+LIMIT2+LIMIT3;

    printf("Введите потреблённую энергию (для выхода q): \n");
    while(scanf("%f", &energy)==1)
    {
        if (energy<=diap1)
            printf("Вы должны заплатить $%g\n", energy*RATE1);
        else if (energy<=diap2)
            printf ("Вы должны заплатить $%g\n", (LIMIT1*RATE1)+(energy-diap1)*RATE2);
        else if (energy<=diap3)
            printf ("Вы должны заплатить $%g\n", (LIMIT1*RATE1)+(LIMIT2*RATE2)+(energy-diap2)*RATE3);
        else
            printf("Вы должны заплатить $%g\n", (LIMIT1*RATE1)+(LIMIT2*RATE2)+(LIMIT3*RATE3)+(energy-diap3)*RATE4);
        printf("Введите потреблённую энергию (для выхода q): \n");
    }

    return 0;
}
