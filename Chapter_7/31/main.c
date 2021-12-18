#include <stdio.h>
#include <stdlib.h>

char ch;

int main()
{
    printf("Hello world!\n");
    while ((ch=getchar())!='\n')
    {
        putchar(ch);
    }

    return 0;
}
