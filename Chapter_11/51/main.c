#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char *s_gets(char *str, int n);
    void del_space(char *str);
    char name[SIZE];
    puts("¬ведите строку с пробелами (или пустую строку дл€ выхода): ");
    s_gets(name, SIZE);
    while(*name!='\0')
    {
        del_space(name);
        printf("¬от что получилось:\n%s\n", name);

        puts("¬ведите строку с пробелами (или пустую строку дл€ выхода): ");
        s_gets(name, SIZE);
    }

    printf("Hello world!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    int i=0;
    char *result;
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
void del_space(char *str)
{
    int i=0;
    while(*(str+i)!='\0')
    {
        if(*(str+i)==' ')
        {
            strcpy(str+i,str+i+1);
            i=-1;
        }
        i++;
    }
}
