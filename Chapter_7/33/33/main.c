#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char ch;

int main()
{
    printf("Hello world!\n");
    while ((ch=getchar())!='\n')
    {
        if (isalpha(ch))
        {
            if (islower(ch)) ch=toupper(ch);
            else ch=tolower(ch);
        }
        putchar(ch);
    }



    return 0;
}
