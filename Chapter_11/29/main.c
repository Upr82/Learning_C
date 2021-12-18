#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int main()
{
    system("chcp 1251");
    system("cls");
    char *s_gets(char *, int);
    char source1[SIZE];
    char source2[SIZE];
    char target[SIZE*2+40];
    double priz;
    fputs("Введите ваше имя: ", stdout);
    s_gets(source1, SIZE);
    fputs("Введите вашу фамилию: ", stdout);
    s_gets(source2, SIZE);
    fputs("Введите сумму вашего приза: ", stdout);
    scanf("%lf", &priz);
    sprintf(target,"%s %s, заберите ваш приз в размере %g рублей!\n", source1, source2, priz);
    puts("Вот что вышло:");
    puts(target);


    printf("Hello world!\n");
    return 0;
}
