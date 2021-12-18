#include <stdio.h>
#include <stdlib.h>

int my_func(void);

int main()
{
    system("chcp 1251");
    int i,m;
    printf("Введите количество вызовов функции my_func (0 для выхода): ");
    scanf("%d", &i);
    while(i>0)
    {
        for(m=0;m<i;m++)
            printf("Меня вызвали %d раз(а)\n", my_func());
        printf("Введите количество вызовов функции my_func (0 для выхода): ");
        scanf("%d", &i);
    }

    printf("Hello world!\n");
    return 0;
}

int my_func(void)
{
    static int count=1;
    printf("Я - функция my_func!");

    return count++;
}
