#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("Введите нужный код:\n");
    printf("1) Отель *.   2) Отель **.\n");
    printf("3) Отель ***. 4) Отель ****.\n");
    printf("5) Выход.\n");

    while((status=scanf("%d", &code))!=1 ||(code<1 || code>5))
    {
        if (status!=1)
            scanf("%*s");
        printf("Ошибка! Введите целое число от 1 до 5: ");
    }
    return code;
}

int getnights(void)
{
    int nights, status;
    printf("Укажите, на сколько суток Вы бронируете номер: ");
    while((status=scanf("%d", &nights))!=1 || (nights<1))
    {
        if (status!=1)
            scanf("%*s");
        printf("Ошибка! Введите целое положительное число: ");
    }
    return nights;
}

void showprice(double hotel_rate, int nights)
{
    double price;
    int i;
    for (i=1;i<=nights;i++,hotel_rate*=SALE)
        price+=hotel_rate;
    printf("Стоимость проживания составляет %.2f\n", price);
}
