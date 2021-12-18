#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main()
{
    system("chcp 1251");
    char name[SIZE];
    char *s_gets(char *str, int n);

    puts("Введи строку, для выхода пустую строку.");
    while(s_gets(name, SIZE) && *name!='\0')
    {
        fputs("Вот эта строка:", stdout);
        puts(name);
        puts("Введи строку, для выхода пустую строку.");
    }

    printf("End!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    result=fgets(str, n, stdin);
    if(result)
    {
        while(*str!='\0' && *str!='\n')
            str++;
        if(*str=='\n')
            *str='\0';
        else while (getchar()!='\n')
            continue;
    }
    return result;
}
