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
//const int LIMIT4 = 720;
float energy;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Введите количество потреблённой энергии (для выхода q): ");
    while(scanf("%f", &energy)==1)
    {
        if (energy<=LIMIT1) printf("Вы должны заплатить $%g.\n", energy*RATE1);
        else if (energy<=(LIMIT1+LIMIT2)) printf("Вы должны заплатить $%g.\n", (RATE1*LIMIT1)+(energy-LIMIT1)*RATE2);
        else if (energy<=(LIMIT1+LIMIT2+LIMIT3)) printf("Вы должны заплатить $%g.\n", (RATE1*LIMIT1)+(RATE2*LIMIT2)+(energy-(LIMIT1+LIMIT2))*RATE3);
        else printf("Вы должны заплатить $%g.\n", (RATE1*LIMIT1)+(RATE2*LIMIT2)+(RATE3*LIMIT3)+(energy-(LIMIT1 + LIMIT2 + LIMIT3))*RATE4);

        printf("Введите количество потреблённой энергии (для выхода q): ");


    }




    return 0;
}
