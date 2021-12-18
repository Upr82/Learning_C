#include <stdio.h>
#include <stdlib.h>

const int ROWS=5, CHARS=5;
int i,j;

int main(void)
{
    printf("Hello world!\n");
    for (i=1;i<=CHARS; i++)
    {
        for (j=1;j<=i;j++) printf("$");
        printf("\n");
    }


    return 0;
}
