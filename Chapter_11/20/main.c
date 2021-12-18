#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 20
#define NAME "GRANT"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char * s_gets(char * str, int n);
    char answer[SIZE];

    puts("Кто лежит в могиле Гранта?");
    s_gets(answer, SIZE);
    while(strcmp(answer, NAME))
    {
        puts("Вы не угадали! Попробуйте ещё!");
        s_gets(answer, SIZE);
    }
    puts("Верно!");

    return 0;
}
char * s_gets(char * str, int n)
{
    char * out;
    int i=0;
    out=fgets(str, n, stdin);
    if(*out)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=toupper(str[i]);
        putchar(str[i]);
    }
    putchar('\n');

    return out;
}
