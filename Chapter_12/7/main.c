#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "new.h"

int main()
{

    system("chcp 1251");
    int dice, roll, sides, status;
    srand((unsigned int)time(0));
    printf("������� ���������� ������ ������ ��� 0 ��� ����������.\n");
    while(scanf("%d", &sides)==1 && sides>0)
    {
        printf("������� ������?\n");
        if((status=scanf("%d", &dice))!=1)
        {
            if(status==EOF)
                break;
            else
            {
                printf("�� ������ ������ ����� �����.");
                printf("������� ����� � ������.\n");
                while (getchar()!='\n')
                    continue;
                printf("������� ������? ��� ����������� ������� 0.\n");
                continue;
            }
        }
        roll=roll_n_dice(dice, sides);
        printf("�� ������� %d ���(�), ��������� %d ������ � %d �������.\n",
               roll, dice, sides);
        printf("������� ������? ��� ����������� ������� 0.\n");

    }
    printf("������� rollem ���� ������� %d ���(�).\n", roll_count);
    printf("����� ��� �� ������� �����!\n");

    return 0;
}
