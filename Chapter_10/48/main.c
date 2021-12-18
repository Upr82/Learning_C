#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define YEAR 5
#define MONTHS 12

int main()
{
    void sum_year(const float (*ar)[MONTHS], int n);
    void medium_months (const float (*ar)[MONTHS], int n);
    SetConsoleOutputCP(1251);
    const float rain[YEAR][MONTHS]={
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}};

    sum_year(rain, YEAR);
    medium_months(rain, YEAR);

    return 0;
}

void sum_year(const float (*ar)[MONTHS], int n)
{
    int  y,m;
    float total=0.0, subtot;
    for(y=0;y<n;y++)
    {
        for(m=0,subtot=0.0;m<MONTHS;m++)
            subtot+=*(*(ar+y)+m);
        total+=subtot;
        printf("201%d год = %g\n", y, subtot);
    }
    printf("Среднегодовое значение = %.2f\n", total/n);
}

void medium_months(const float (*ar)[MONTHS], int n)
{
    float sum;
    int y,m;
    printf("%5s%5s%5s%5s%5s%5s%5s%5s%5s%5s%5s%5s\n",
           "Янв.","Фев.","Март","Апр.","Май","Июнь","Июль","Авг.","Сен.","Окт.","Ноя.","Дек.");
    for(m=0;m<MONTHS;m++)
    {
        for(y=0,sum=0.0;y<n;y++)
            sum+=*(*(ar+y)+m);
        printf(" %.1f ", sum/n);
    }

}
