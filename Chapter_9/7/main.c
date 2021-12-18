#include <stdio.h>
#include "hotel.h"

int main(void)
{
    SetConsoleOutputCP(1251);

    int nights, code;
    double hotel_rate;

    printf("Это программа рассчета стоимости проживания в выбранном отеле.\n");

    while((code=menu())!=QUIT)
    {
        switch(code)
        {
        case 1:
            hotel_rate=HOTEL1;
            break;
        case 2:
            hotel_rate=HOTEL2;
            break;
        case 3:
            hotel_rate=HOTEL3;
            break;
        case 4:
            hotel_rate=HOTEL4;
            break;
        default:
            printf("Ошибка!\n");
            break;
        }
        nights=getnights();
        showprice(hotel_rate, nights);
    }
    printf("Благодарим за использование и желаем успехов!\n");

    return 0;
}
