#include <stdio.h>
#include <windows.h>
#define YEARS 5
#define MONTHS 12

int main(void)
{

    SetConsoleOutputCP(1251);
    const float rain[YEARS][MONTHS]={
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}};

    int i,j;
    float total=0.0, subtot;
    float (*p)[12];
    p=rain;

    for(i=0;i<YEARS;i++)
    {
        for(subtot=0, j=0;j<MONTHS;j++)
            subtot+=*(*(p+i)+j);
        printf("В 201%d году было %g осадков\n", i, subtot);
    }

    for(i=0;i<YEARS;i++)
    {
        for(j=0;j<MONTHS;j++)
            total+=*(*(p+i)+j);
    }
    printf("Всего осадков за %d лет = %5.1f.\n", YEARS, total);
    printf("В среднем за год выпадает %g.\n", total/YEARS);

    /*



    printf("Средняя величина осадков за %d лет по месяцам:\n", YEARS);
    printf(" Янв. Фев. Мар. Апр. Май  Июнь Июль Авг. Сен. Окт. Ноя. Дек.\n");

    */




    return 0;
}
