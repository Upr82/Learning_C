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
        fprintf(stdout,"������� ��� ��� ����� Ai 4-20 �� � %d: ", i+1);
        fscanf(stdin,"%20s", ai420ma[i].label);
        while(getchar()!='\n')
            continue;
        fprintf(stdout,"�������, ������� (1) ��� �������� (0) ���� : ");
        fscanf(stdin,"%d", &ai420ma[i].onoff);
        /*while(getchar()!='\n')
            continue;*/
        fprintf(stdout,"������� ����������� �������� ����� �� ���� (�� 4.0 �� 20.0 ��): ");
        while(fscanf(stdin,"%f", &ai420ma[i].min_norma_ma)!=1 || ai420ma[i].min_norma_ma<4.0 ||
            ai420ma[i].min_norma_ma>20.0)
        {
            fprintf(stdout,"������! ������� �������� �� 4.0 �� 20.0: ");
        }

        fprintf(stdout,"������� ������������ �������� ����� �� ���� (�� %.2f �� 20.0 ��): ",
                ai420ma[i].min_norma_ma);
        while(fscanf(stdin,"%f", &ai420ma[i].max_norma_ma)!=1 ||
              ai420ma[i].max_norma_ma<ai420ma[i].min_norma_ma || ai420ma[i].max_norma_ma>20.0)
        {
            fprintf(stdout,"������! ������� �������� �� %.2f �� 20.0: ", ai420ma[i].min_norma_ma);
        }
    }
    puts("��� ��� ����������: ");
    for(i=0;i<MAX_420;i++)
    {
        printf("���� Ai 4-20�� � %d, ��������    : %s\n", i+1, ai420ma[i].label);
        printf("���� Ai 4-20�� � %d, ������������: %s\n", i+1, (ai420ma[i].onoff==0)?"����":"���");
        printf("���� Ai 4-20�� � %d, ����� min   : %.2f\n", i+1, ai420ma[i].min_norma_ma);
        printf("���� Ai 4-20�� � %d, ����� max   : %.2f\n", i+1, ai420ma[i].max_norma_ma);
    }


    printf("\nEnd!\n");
    return 0;
}
