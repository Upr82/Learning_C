#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
const float FREEZING=0.0;
float tem;
int all_days=0, cold_days=0;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа показывает общее количество дней и процент дней с Т<0.\n");
    printf("Введите минимальную температуру дня (для выхода q): ");
    while(scanf("%f", &tem)==1)
    {
        all_days++;
        if(tem<FREEZING) cold_days++;
    }
    if(all_days!=0) printf("Всего %d дней, из них %5.2f%% Т была < 0 С.", all_days, 100.0*((float)cold_days/all_days));
    if(all_days==0) printf("Данные не введены.");








    return 0;
}
