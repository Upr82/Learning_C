#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 30

char *s_gets(char *str, int n);
void ToUpper(char *);
void show(char *);


int main()
{
    system("chcp 1251");
    char my_string[SIZE];
    void (*pf)(char *);


    puts("¬ведите строку или пустую строку дл€ выхода: ");
    while(s_gets(my_string, SIZE)!=NULL && my_string[0]!='\0')
    {
        pf=ToUpper;
        pf(my_string);
        pf=show;
        pf(my_string);

        puts("¬ведите строку или пустую строку дл€ выхода: ");
    }

    printf("Hello world!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result, *fin;
    result=fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if(fin)
            *fin='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
void ToUpper(char *str)
{
    while(*str)
    {
        *str=toupper(*str);
        str++;
    }
}
void show(char * str)
{
    puts(str);
}
