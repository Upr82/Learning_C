#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int min;
int hour;
const int MIN_PER_HOUR = 60;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа перевода минут в часы и минуты.\n");
    printf("Введите количество минут, для выхода введите 0 или отрицательное число:");
    scanf("%d", &min);
    while (min>0)
    {
        printf("%d минут это %d часов и %d минут.\n", min, min/MIN_PER_HOUR, min%MIN_PER_HOUR);
        printf("Введите количество минут, для выхода введите 0 или отрицательное число:");
        scanf("%d", &min);
    }
    return 0;
}
