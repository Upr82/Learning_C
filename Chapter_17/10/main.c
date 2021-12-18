#include <stdio.h>
#include <stdlib.h>
#include "name_fl.h"
#include "name_fl.h"

int main()
{
    system("chcp 1251");
    system("cls");

    name_fl name;
    get_name(&name);
    printf("Добро пожаловать, ");
    show_name(&name);


    printf("End!\n");
    return 0;
}
