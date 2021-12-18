#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int count=0, total=0;

int main()
{
    system("chcp 1251");
    int edges, cubes, scores, rep;

    printf("������� ���������� ������ ����� (3-8, 0 ��� ������)\n");
    if (scanf("%d",&edges)==1 && edges>=3 && edges<=8)
    {
        printf("������� ���������� ������ (1-4)\n");
        while(scanf("%d", &cubes)!=1 || cubes<1 || cubes>4)
        {
            printf("�� ���������! ������� 1-4.\n");
        }
        scores=my_rand(edges, cubes);
        printf("�� ������� %d %d-� ������� �����(��), � ��� ������ %d ����(��)!\n", cubes, edges, scores);
        puts("��� ���������� ������ ������� 1, ��� ������ 0.");
        while(scanf("%d", &rep)==1 && rep==1)
        {
            scores=my_rand(edges, cubes);
            printf("�� ������� %d %d-� ������� �����(��), � ��� ������ %d ����(��)!\n", cubes, edges, scores);
            puts("��� ���������� ������ ������� 1, ��� ������ 0.");
        }
    }

    printf("�� ������� ����� %d ���(�) � ����� ������� %d ����(��).\n", count, total);

    puts("��� � ��!");
    return 0;
}
