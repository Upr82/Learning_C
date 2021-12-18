#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int a,b,c;
long long d,e;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Введите два целых положительных числа, снача меньшее, потом большее: ");
    scanf("%d %d", &a, &b);
    for (c=a;c<=b;c++)
    {
        d = c*c;
        e = c*c*c;
        printf("Число = %5d, число в квадрате = %8lld, число в кубе = %10lld\n", c, d, e);
    }




    return 0;
}
