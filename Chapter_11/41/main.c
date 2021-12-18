#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char *s_gets(char *str, int n);
    char name[SIZE];
    puts("Введи строку, для выхода пустую строку.");
    while(s_gets(name,SIZE) && name[0]!='\0')
    {
        printf("Вот эта строка: %s\n", name);
        puts("Введи строку, для выхода пустую строку.");
    }

    printf("End!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    char *ns;
    char *es;
    result=fgets(str, n, stdin);
    if(result)
    {


    }
    return result;
}
