#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    int n=8;

    printf("���������� ��� ������ n = %d �� ������ %p\n", n, &n);

    for(int n=1;n<3;n++)
        printf("\t������ ����� �1, n = %d �� ������ %p\n", n, &n);

    printf("���������� ��� ������ n = %d �� ������ %p\n", n, &n);

    for(int n=1;n<3;n++)
    {
        printf("\t������ ����� �2, n = %d �� ������ %p\n", n, &n);
        {
            int n=22;
            printf("\t\t���� ������ ����� �2, n = %d �� ������ %p\n", n, &n);
            n++;
        }
    }

    printf("���������� ��� ������ n = %d �� ������ %p\n", n, &n);


    return 0;
}
