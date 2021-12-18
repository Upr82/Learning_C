#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int count=0, total=0;

int main()
{
    system("chcp 1251");
    int edges, cubes, scores, rep;

    printf("Введите количество граней кости (3-8, 0 для выхода)\n");
    if (scanf("%d",&edges)==1 && edges>=3 && edges<=8)
    {
        printf("Введите количество костей (1-4)\n");
        while(scanf("%d", &cubes)!=1 || cubes<1 || cubes>4)
        {
            printf("Не правильно! Введите 1-4.\n");
        }
        scores=my_rand(edges, cubes);
        printf("Вы бросили %d %d-и гранных кости(ей), и Вам выпало %d очка(ов)!\n", cubes, edges, scores);
        puts("Для следующего броска введите 1, для выхода 0.");
        while(scanf("%d", &rep)==1 && rep==1)
        {
            scores=my_rand(edges, cubes);
            printf("Вы бросили %d %d-и гранных кости(ей), и Вам выпало %d очка(ов)!\n", cubes, edges, scores);
            puts("Для следующего броска введите 1, для выхода 0.");
        }
    }

    printf("Вы бросали кости %d раз(а) и всего набрали %d очка(ов).\n", count, total);

    puts("Вот и всё!");
    return 0;
}
