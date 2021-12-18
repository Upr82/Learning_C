#include <stdio.h>
#include <stdlib.h>

int count=0;//статическая переменная с внешним связыванием
void report(void);//прототип функции
void accumulate(int k);//прототип функции

int main()
{
    system("chcp 1251");
    int value;//переменная с автоматическим классом, видимая в блоке
    register int i;//переменная автоматического класса, видимая в блоке, с быстрым доступом
    printf("Введите целое число (для выхода 0): ");
    while(scanf("%d", &value)==1 && value>0)
    {
        for(i=value;i>=0;i--)
            accumulate(i);
        printf("Введите целое число (для выхода 0): ");
    }
    report();

    //printf("Hello world!\n");
    return 0;
}
void report(void)
{
    printf("Цикл выполнен %d раз.\n", count);//вывод значения статической переменой с внешним связыванием
}
