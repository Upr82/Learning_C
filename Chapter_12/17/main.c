#include <stdio.h>
#include <stdlib.h>

int my_func(void);

int main()
{
    system("chcp 1251");
    int i,m;
    printf("������� ���������� ������� ������� my_func (0 ��� ������): ");
    scanf("%d", &i);
    while(i>0)
    {
        for(m=0;m<i;m++)
            printf("���� ������� %d ���(�)\n", my_func());
        printf("������� ���������� ������� ������� my_func (0 ��� ������): ");
        scanf("%d", &i);
    }

    printf("Hello world!\n");
    return 0;
}

int my_func(void)
{
    static int count=1;
    printf("� - ������� my_func!");

    return count++;
}
