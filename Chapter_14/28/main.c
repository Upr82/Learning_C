#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");

    int count;
    union num
    {
        int i;
        float f;
        char c;
    };

    union num ua, ub, uc;

    for(count=0;count<3;count++)
    {
        if(count==0)
        {
            printf("������� ����� � 1 ��� �����: ");
            if(scanf("%d", &ua.i)!=1)
            {
                printf("������ �����!");
                exit(1);
            }
            while(getchar()!='\n')
                continue;
            printf("������� ����� � 2 ��� �����: ");
            if(scanf("%d", &ub.i)!=1)
            {
                printf("������ �����!");
                exit(1);
            }
            while(getchar()!='\n')
                continue;
            uc.i=ua.i+ub.i;
            printf("����� �������� ����� = %d\n", uc.i);
        } else
        if(count==1)
        {
            printf("������� ����� � 1 ��� � ������: ");
            if(scanf("%f", &ua.f)!=1)
            {
                printf("������ �����!");
                exit(1);
            }
            while(getchar()!='\n')
                continue;
            printf("������� ����� � 2 ��� � ������: ");
            if(scanf("%f", &ub.f)!=1)
            {
                printf("������ �����!");
                exit(1);
            }
            while(getchar()!='\n')
                continue;
            uc.f=ua.f+ub.f;
            printf("����� �������� ����� = %g\n", uc.f);
        } else
        {
            printf("������� ����� �1: ");
            if(scanf("%c", &ua.c)!=1)
            {
                printf("������ �����!");
                exit(1);
            }
            while(getchar()!='\n')
                continue;
            printf("������� ����� � 2: ");
            if(scanf("%c", &ub.c)!=1)
            {
                printf("������ �����!");
                exit(1);
            }
            while(getchar()!='\n')
                continue;
            uc.c=ua.c+ub.c;
            printf("����� �������� ����� = %c\n", uc.c);
        }
    }


    printf("Hello world!\n");
    return 0;
}
