#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int mode, old=0;
    system("chcp 1251");
    printf("Введите 0 для метрического режима или 1 для американского: ");
    scanf("%d", &mode);
    while(mode>=0)
    {
        show_info(old=get_info(mode, old));

        printf("Введите 0 для метрического режима или 1 для американского (-1 для выхода): ");
        scanf("%d", &mode);
    }

    printf("End!\n");
    return 0;
}
