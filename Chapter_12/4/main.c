#include <stdio.h>
#include <stdlib.h>

int num=0;
void critic(void);

int main()
{
    system("chcp 1251");
    extern int num;

    printf("������� ����� ������� ������� ����?\n");
    scanf("%d", &num);
    while(num!=20)
        critic();
    printf("�� �������!\n");

    return 0;
}
void critic(void)
{
    printf("���, �� �����! ���������� ���!\n");
    scanf("%d", &num);
}
