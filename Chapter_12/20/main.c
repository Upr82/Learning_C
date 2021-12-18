#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new.h"

int main()
{
    srand((unsigned int)time(0));
    system("chcp 1251");
    int cast, edge, cube, i;

    printf("������� ���������� ������� ��� q ��� ������: ");
    while(scanf("%d", &cast)==1 && cast>0)
    {
        printf("������� ������ (�� 4) � ������� ������ (�� 1): ");
        while(scanf("%d %d", &edge, &cube)!=2 || edge<4 || cube<1)
        {
            puts("�����������! ������� ���������� ������ � ������ ���������.");
        }
        printf("����� %d ������� %d ������ �� %d ������.\n", cast, cube, edge);
        for(i=0;i<cast;i++)
        {
            printf("%5d", my_rand(edge, cube));
        }

        printf("\n������� ���������� ������� ��� q ��� ������: ");
    }

    printf("End!\n");
    return 0;
}
