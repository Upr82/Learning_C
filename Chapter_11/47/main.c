#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char name[SIZE];
    char ch;
    int is_within(char *str, char n);
    char *s_gets(char *str, int n);

    printf("Введите строку:");
    while(s_gets(name, SIZE) && name[0]!='\0')
    {
        printf("Введите искомый символ: ");
        ch=getchar();
        getchar();
        if(is_within(name, ch))
            printf("Символ \"%c\" есть в ведённой строке.\n", ch);
        else puts("Тут нет такого символа.");
        printf("Введите строку:");
    }

    printf("End!\n");
    return 0;
}
int is_within(char *str, char n)
{
    int result;
    if(strchr(str, n))
        result = 1;
    else result=0;

    return result;
}
char *s_gets(char *str, int n)
{
    char* result;
    int i=0;
    result=fgets(str, n, stdin);
    if(result)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
            continue;
    }
    return result;
}
