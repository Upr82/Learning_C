#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new.h"

int main()
{
    srand((unsigned int)time(0));
    system("chcp 1251");
    int cast, edge, cube, i;

    printf("Введите количество бросков или q для выхода: ");
    while(scanf("%d", &cast)==1 && cast>0)
    {
        printf("Сколько граней (от 4) и сколько костей (от 1): ");
        while(scanf("%d %d", &edge, &cube)!=2 || edge<4 || cube<1)
        {
            puts("Неправильно! Введите количества граней и костей корректно.");
        }
        printf("Имеем %d бросков %d костей по %d граней.\n", cast, cube, edge);
        for(i=0;i<cast;i++)
        {
            printf("%5d", my_rand(edge, cube));
        }

        printf("\nВведите количество бросков или q для выхода: ");
    }

    printf("End!\n");
    return 0;
}
