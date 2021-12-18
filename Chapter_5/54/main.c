#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int a,b,sum,i;

int main()
{
    SetConsoleOutputCP(1251);
    printf("¬ведите два целых положительных числа (первое число д.б. меньше второго): ");
    while ((scanf("%d%d", &a, &b)==2) && (a<b))
    {
        for(i=a, sum=0;i<=b;i++) sum += i*i;
        printf("—умма квадратов целых чисел от %d до %d равна %d\n", a*a, b*b, sum);
        printf("¬ведите два целых положительных числа (первое число д.б. меньше второго): ");
    }



    return 0;
}
