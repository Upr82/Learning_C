#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LABEL_SIZE 20
#define MAX_420 4


int main()
{
    struct
    {
        char label[LABEL_SIZE];
        int onoff;
        float min_norma_ma;
        float max_norma_ma;
    } ai420ma[MAX_420];
    int i;

    system("chcp 1251");
    for(i=0;i<MAX_420;i++)
    {
        fprintf(stdout,"¬ведите им€ дл€ входа Ai 4-20 мј є %d: ", i+1);
        fscanf(stdin,"%20s", ai420ma[i].label);
        while(getchar()!='\n')
            continue;
        fprintf(stdout,"”кажите, включен (1) или выключен (0) вход : ");
        fscanf(stdin,"%d", &ai420ma[i].onoff);
        /*while(getchar()!='\n')
            continue;*/
        fprintf(stdout,"”кажите минимальное значение нормы по току (от 4.0 до 20.0 мј): ");
        while(fscanf(stdin,"%f", &ai420ma[i].min_norma_ma)!=1 || ai420ma[i].min_norma_ma<4.0 ||
            ai420ma[i].min_norma_ma>20.0)
        {
            fprintf(stdout,"ќшибка! введите значение от 4.0 до 20.0: ");
        }

        fprintf(stdout,"”кажите максимальное значение нормы по току (от %.2f до 20.0 мј): ",
                ai420ma[i].min_norma_ma);
        while(fscanf(stdin,"%f", &ai420ma[i].max_norma_ma)!=1 ||
              ai420ma[i].max_norma_ma<ai420ma[i].min_norma_ma || ai420ma[i].max_norma_ma>20.0)
        {
            fprintf(stdout,"ќшибка! введите значение от %.2f до 20.0: ", ai420ma[i].min_norma_ma);
        }
    }
    puts("¬от что получилось: ");
    for(i=0;i<MAX_420;i++)
    {
        printf("¬ход Ai 4-20мј є %d, название    : %s\n", i+1, ai420ma[i].label);
        printf("¬ход Ai 4-20мј є %d, включенность: %s\n", i+1, (ai420ma[i].onoff==0)?"¬џ Ћ":"¬ Ћ");
        printf("¬ход Ai 4-20мј є %d, норма min   : %.2f\n", i+1, ai420ma[i].min_norma_ma);
        printf("¬ход Ai 4-20мј є %d, норма max   : %.2f\n", i+1, ai420ma[i].max_norma_ma);
    }


    printf("\nEnd!\n");
    return 0;
}
