#include <stdio.h>
#include <windows.h>
#define MONTHS 12

int main(void)
{
    SetConsoleOutputCP(1251);
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};

    void print_day(int *, int);
    /*printf(" ���. ���. ���� ���.  ��� ���� ���� ���. ���. ���. ���. ���.\n");
    for(i=0;i<MONTHS;i++)
        printf("%5d", *(days+i));*/
    print_day(days, MONTHS);
    printf("� main! ����� ������ ��� ������ = %u ������.\n", sizeof (days));




    return 0;
}

void print_day(int *ar, int n)
{
    int i, total=0;
    printf(" ���. ���. ���� ���.  ��� ���� ���� ���. ���. ���. ���. ���.\n");
    for(i=0;i<n;i++)
    {
        printf("%5d", *(ar+i));
        total+=*(ar+i);
    }

    printf("\n����� � ���� %d ����!\n", total);
    printf("����� ������ ��� ������ = %u ������.\n", sizeof (ar));
}
