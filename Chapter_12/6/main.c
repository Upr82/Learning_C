#include <stdio.h>
#include <stdlib.h>

extern int rand1(void);
extern void srand1(int);
int main()
{
    system("chcp 1251");
    int count, seed;
    printf("������� ��������� �����: ");
    while(scanf("%d", &seed)==1 && seed>0)
    {
        srand1(seed);
        for(count=1;count<=5;count++)
        {
            printf("����� � %d\n", count);
            printf("��������� ����� = %d\n", rand1());
            putchar('\n');
        }
        printf("������� ��������� �����: ");
    }


    printf("End!\n");
    return 0;
}
