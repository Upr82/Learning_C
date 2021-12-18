#include <stdio.h>
#include <ctype.h>

char get_first(void);



int main(void)
{
    printf("Enter text, program return first non-space symbol: ");
    printf("First non-space symbol = %c.\n",
           get_first());


    return 0;
}

char get_first(void)
{
    char ch;
    while ( isspace(ch=getchar()))
            putchar('*');
    while (getchar()!='\n')
        continue;

    return ch;
}
