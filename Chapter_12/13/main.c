#include <stdio.h>
#include <stdlib.h>

int critic(void);

int main()
{
    system("chcp 1251");
    int weight;
    puts("������� ����� ������� ������ ����?");
    scanf("%d", &weight);
    while(weight!=20)
    {
        weight=critic();
    }

    printf("�� ����� ���!\n");
    return 0;
}

int critic(void)
{
    int result;
    puts("�� �����! ������� �����.");
    scanf("%d", &result);

    return result;
}
