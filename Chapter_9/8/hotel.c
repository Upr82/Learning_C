#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("������� ������ ���:\n");
    printf("1) ����� *.   2) ����� **.\n");
    printf("3) ����� ***. 4) ����� ****.\n");
    printf("5) �����.\n");

    while((status=scanf("%d", &code))!=1 ||(code<1 || code>5))
    {
        if (status!=1)
            scanf("%*s");
        printf("������! ������� ����� ����� �� 1 �� 5: ");
    }
    return code;
}

int getnights(void)
{
    int nights, status;
    printf("�������, �� ������� ����� �� ���������� �����: ");
    while((status=scanf("%d", &nights))!=1 || (nights<1))
    {
        if (status!=1)
            scanf("%*s");
        printf("������! ������� ����� ������������� �����: ");
    }
    return nights;
}

void showprice(double hotel_rate, int nights)
{
    double price;
    int i;
    for (i=1;i<=nights;i++,hotel_rate*=SALE)
        price+=hotel_rate;
    printf("��������� ���������� ���������� %.2f\n", price);
}
