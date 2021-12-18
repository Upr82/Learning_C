#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define NAME "GRANT"
#define SIZE 20

int main()
{
    char answer[SIZE];
    system("chcp 1251");
    char *s_gets(char *, int);
    puts("Кто лежит в могиле Гранта?");
    s_gets(answer, SIZE);
    while(strncmp(NAME, answer, strlen(NAME))!=0)
    {
        puts("Не угадали! Кто лежит в могиле Гранта?");
        s_gets(answer, SIZE);
    }


    printf("Правильно!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str, n, stdin);
    if(result)
    {
        while(str[i]!='\0' && str[i]!='\n')
        {
            if(islower(str[i]))
                str[i]=toupper(str[i]);
            i++;
        }

        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }

    return result;
}
