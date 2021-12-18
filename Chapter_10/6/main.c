#include <stdio.h>
#include <windows.h>
#define MONTHS 12

int main(void)
{
    SetConsoleOutputCP(1251);
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};

    void print_day(int *, int);
    /*printf(" Янв. Фев. Март Апр.  Май Июнь Июль Авг. Сен. Окт. Ноя. Дек.\n");
    for(i=0;i<MONTHS;i++)
        printf("%5d", *(days+i));*/
    print_day(days, MONTHS);
    printf("В main! Объём памяти под массив = %u байтов.\n", sizeof (days));




    return 0;
}

void print_day(int *ar, int n)
{
    int i, total=0;
    printf(" Янв. Фев. Март Апр.  Май Июнь Июль Авг. Сен. Окт. Ноя. Дек.\n");
    for(i=0;i<n;i++)
    {
        printf("%5d", *(ar+i));
        total+=*(ar+i);
    }

    printf("\nВсего в году %d дней!\n", total);
    printf("Объём памяти под массив = %u байтов.\n", sizeof (ar));
}
