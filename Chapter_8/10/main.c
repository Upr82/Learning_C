#include <stdio.h>

char ch;

int main(void)
{
    while((ch=getchar())!=EOF)
        putchar(ch);


    return 0;
}
