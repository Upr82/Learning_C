#include <stdio.h>
#include "hotel.h"

int main(void)
{
    SetConsoleOutputCP(1251);

    int nights, code;
    double hotel_rate;

    printf("��� ��������� �������� ��������� ���������� � ��������� �����.\n");

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
            printf("������!\n");
            break;
        }
        nights=getnights();
        showprice(hotel_rate, nights);
    }
    printf("���������� �� ������������� � ������ �������!\n");

    return 0;
}
