#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void menu(void);

int count=0;
static int choise;
int main()
{
    srand((unsigned int)time(0));
    system("chcp 1251");
    printf("��������� �������������� ����������.\n");
    menu();

    while(scanf("%d", &choise)==1 && choise>0 && choise<3)
    {
        switch (choise)
        {
        case 1:
            sum();
            break;
        case 2:
            razn();
            break;
        }
        menu();
    }
    printf("���� ��������� %d ������������� ��������.\n", count);
    puts("��� � ��!");
    return 0;
}

void menu(void)
{
    puts("�������� ��������: ");
    puts("1 - ��������;");
    puts("2 - ���������;");
    puts("0 - �����;");
}
