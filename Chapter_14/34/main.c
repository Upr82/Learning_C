#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void ToUpper(char *);

int main()
{
    char STR[]="It is string literal.";
    system("chcp 1251");
    puts(STR);
    ToUpper(STR);
    puts(STR);



    printf("Hello world!\n");
    return 0;
}

void ToUpper(char *str)
{
    while(*str)
    {
        *str=toupper(*str);
        str++;
    }
}

