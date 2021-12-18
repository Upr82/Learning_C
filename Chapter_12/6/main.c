#include <stdio.h>
#include <stdlib.h>

extern int rand1(void);
extern void srand1(int);
int main()
{
    system("chcp 1251");
    int count, seed;
    printf("Введите стартовое число: ");
    while(scanf("%d", &seed)==1 && seed>0)
    {
        srand1(seed);
        for(count=1;count<=5;count++)
        {
            printf("Вызов № %d\n", count);
            printf("Случайное число = %d\n", rand1());
            putchar('\n');
        }
        printf("Введите стартовое число: ");
    }


    printf("End!\n");
    return 0;
}
