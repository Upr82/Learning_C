#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int limit, count=1;
double time, delitel;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");
    printf("Введите количество отрезков: ");
    scanf("%d", &limit);

    for(time=0.0, delitel=1.0 ; count<=limit; count++, delitel *= 2.0)
    {
        time += 1.0/delitel;
        printf("При слагаемом № %2d, время равно %.12f секунд;\n", count, time);

    }

    return 0;
}
