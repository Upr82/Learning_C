#include <stdio.h>
#include <stdlib.h>
#include "add.h"


int main()
{
    system("chcp 1251");
    int mode;
    printf("������� 0 ��� ������������ ������ ��� 1 ��� �������������: ");
    scanf("%d", &mode);
    while(mode>=0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("������� 0 ��� ������������ ������ ��� 1 ��� �������������,\n");
        printf("-1 - ��� ������: ");
        scanf("%d", &mode);
    }
    printf("End!\n");
    return 0;
}
