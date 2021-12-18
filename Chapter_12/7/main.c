#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new.h"

int main()
{

    system("chcp 1251");
    int dice, roll, sides, status;
    srand((unsigned int)time(0));
    printf("Введите количество граней кубика или 0 для завершения.\n");
    while(scanf("%d", &sides)==1 && sides>0)
    {
        printf("Сколько костей?\n");
        if((status=scanf("%d", &dice))!=1)
        {
            if(status==EOF)
                break;
            else
            {
                printf("Вы должны ввести целое число.");
                printf("Давайте начнём с начала.\n");
                while (getchar()!='\n')
                    continue;
                printf("Сколько граней? Для прекращения введите 0.\n");
                continue;
            }
        }
        roll=roll_n_dice(dice, sides);
        printf("Вы бросали %d раз(а), используя %d кубика с %d гранями.\n",
               roll, dice, sides);
        printf("Сколько граней? Для прекращения введите 0.\n");

    }
    printf("Функция rollem была вызвана %d раз(а).\n", roll_count);
    printf("Пусть Вас не покинет удача!\n");

    return 0;
}
