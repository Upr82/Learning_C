#include <stdio.h>
#include "hotel.h"

int code, nights;
double hotel_rate;

int main(void)
{
    SetConsoleOutputCP(1251);
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
            printf("Ошибка выбора меню.\n");
            break;
        }
        nights=getnights();
        showprice(hotel_rate, nights);
    }
    printf("Спасибо и всего наилучшего!\n");
    return 0;
}
