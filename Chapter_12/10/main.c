#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(0));
    system("chcp 1251");
    system("cls");
    int max, i;
    int *pt;


    puts("¬ведите количество элементов массива.");
    scanf("%d", &max);
    pt=(int*)calloc(max, sizeof(int));

    for(i=0;i<max;i++)
    {
        pt[i]=(rand()%9);
    }
    for(i=0;i<max;i++)
    {
        printf("%3d", pt[i]);
        if((i%30)==29)
            putchar('\n');
    }

    free(pt);
    printf("\nEnd!\n");
    return 0;
}
