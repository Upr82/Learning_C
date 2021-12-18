#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define CHARS 8

char ch = '$';
int i, j;


int main()
{
    printf("Hello world!\n");
    for (i=1;i<=ROWS;i++)
    {
        for (j=1;j<=CHARS;j++) printf("%c", ch);
        printf("\n");
    }
    return 0;
}
