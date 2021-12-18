#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int DAY_PER_WEEK = 7;
int days, weeks;

int main()
{
    SetConsoleOutputCP(1251);
    printf("¬ведите количество дней (дл€ выхода 0 или -):");
    scanf("%d", &days);
    while (days>0)
    {
        printf("%d дней это %d недель и %d дней.\n", days, days/DAY_PER_WEEK, days%DAY_PER_WEEK);
        printf("¬ведите количество дней (дл€ выхода 0 или -):");
        scanf("%d", &days);
    }
    return 0;
}
