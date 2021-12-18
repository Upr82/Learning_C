#include <stdio.h>
#include <stdlib.h>
#include "add.h"


int main()
{
    system("chcp 1251");
    int mode;
    printf("Введите 0 для метрического режима или 1 для американского: ");
    scanf("%d", &mode);
    while(mode>=0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Введите 0 для метрического режима или 1 для американского,\n");
        printf("-1 - для выхода: ");
        scanf("%d", &mode);
    }
    printf("End!\n");
    return 0;
}
