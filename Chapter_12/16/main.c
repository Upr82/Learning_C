#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int mode, old=0;
    system("chcp 1251");
    printf("������� 0 ��� ������������ ������ ��� 1 ��� �������������: ");
    scanf("%d", &mode);
    while(mode>=0)
    {
        show_info(old=get_info(mode, old));

        printf("������� 0 ��� ������������ ������ ��� 1 ��� ������������� (-1 ��� ������): ");
        scanf("%d", &mode);
    }

    printf("End!\n");
    return 0;
}
