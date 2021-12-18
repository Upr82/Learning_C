#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("Введите число, соответствующее выбранному отелю:\n");
    printf("1. Отель *.   2. Отель **.\n");
    printf("3. Отель ***. 4. Отель ****.\n");
    printf("5. Выход.\n");
    printf("%s%s\n", STARS, STARS);
    while((status=scanf("%d", &code))!=1 ||(code<1 || code>5))
    {
        if (status!=1)
            scanf("%*s");
        printf("Ошибка!Введите правильное значение: ");
    }
    return code;
}

int getnights(void)
{
    int nights;
    printf("На сколько суток вы бронируете номер? ");
    while (scanf("%d", &nights)!=1 || nights<1)
    {
        scanf("%*s");
        printf("Ошибка! Введите целое положительное число: ");
    }
    return nights;
}

void showprice(double hotel_rate, int nights)
{
    int i;
    double price=0.0;
    for (i=1;i<=nights;i++,hotel_rate*=SALE)
        price+=hotel_rate;
    printf("Стоимость проживания %.2f\n", price);

}
