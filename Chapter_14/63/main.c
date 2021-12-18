#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define STRING "It is my string!"

char *myfun(char *str, char c);

int main()
{
    char STRING[]= "It is my string!";
    char *(*pf)(char *, char);
    pf=myfun;

    puts(STRING);
    puts(pf(STRING, '!'));

    printf("Hello world!\n");
    return 0;
}
char *myfun(char *str, char c)
{
    char *result=str;
    int i=0;
    while(*str)
    {
        if((i%3)==2)
            *str=c;
        str++;
        i++;
    }
    return result;
}
