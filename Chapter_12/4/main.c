#include <stdio.h>
#include <stdlib.h>

int num=0;
void critic(void);

int main()
{
    system("chcp 1251");
    extern int num;

    printf("Сколько весит большая бутылка воды?\n");
    scanf("%d", &num);
    while(num!=20)
        critic();
    printf("Вы молоцец!\n");

    return 0;
}
void critic(void)
{
    printf("Нет, не верно! Попробуйте ещё!\n");
    scanf("%d", &num);
}
