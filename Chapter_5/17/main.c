#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
const float CM_PER_FOOT = 30.48;
const float CM_PER_INCH = 2.54;
float cm;
int current_foot;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа перевода сантиметров в футы и дюймы.\n");
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &cm);
    while (cm>0)
    {
        current_foot = cm / CM_PER_FOOT;
        printf("%.1f см = %d футов и %.1f дюймов.\n", cm, current_foot, (cm-((float)current_foot*CM_PER_FOOT))/CM_PER_INCH);
        printf("Введите высоту в сантиметрах (<=0 для выхода из программы): ");
        scanf("%f", &cm);
    }
    printf("Работа завершена.\n");
    return 0;
}
