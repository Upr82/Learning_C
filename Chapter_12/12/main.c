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
    printf("Программа арифметических вычислений.\n");
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
    printf("Было выполнено %d арифметичеких действий.\n", count);
    puts("Вот и всё!");
    return 0;
}

void menu(void)
{
    puts("Выберите действие: ");
    puts("1 - сложение;");
    puts("2 - вычитание;");
    puts("0 - выход;");
}
