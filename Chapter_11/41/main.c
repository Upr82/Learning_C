#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char *s_gets(char *str, int n);
    char name[SIZE];
    puts("����� ������, ��� ������ ������ ������.");
    while(s_gets(name,SIZE) && name[0]!='\0')
    {
        printf("��� ��� ������: %s\n", name);
        puts("����� ������, ��� ������ ������ ������.");
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
