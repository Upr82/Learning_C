#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("������� �����, ��������������� ���������� �����:\n");
    printf("1. ����� *.   2. ����� **.\n");
    printf("3. ����� ***. 4. ����� ****.\n");
    printf("5. �����.\n");
    printf("%s%s\n", STARS, STARS);
    while((status=scanf("%d", &code))!=1 ||(code<1 || code>5))
    {
        if (status!=1)
            scanf("%*s");
        printf("������!������� ���������� ��������: ");
    }
    return code;
}

int getnights(void)
{
    int nights;
    printf("�� ������� ����� �� ���������� �����? ");
    while (scanf("%d", &nights)!=1 || nights<1)
    {
        scanf("%*s");
        printf("������! ������� ����� ������������� �����: ");
    }
    return nights;
}

void showprice(double hotel_rate, int nights)
{
    int i;
    double price=0.0;
    for (i=1;i<=nights;i++,hotel_rate*=SALE)
        price+=hotel_rate;
    printf("��������� ���������� %.2f\n", price);

}
