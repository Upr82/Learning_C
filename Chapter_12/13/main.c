#include <stdio.h>
#include <stdlib.h>

int critic(void);

int main()
{
    system("chcp 1251");
    int weight;
    puts("Сколько весит большая бутыль воды?");
    scanf("%d", &weight);
    while(weight!=20)
    {
        weight=critic();
    }

    printf("Вы знали это!\n");
    return 0;
}

int critic(void)
{
    int result;
    puts("Не верно! Введите снова.");
    scanf("%d", &result);

    return result;
}
