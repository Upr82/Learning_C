#include <stdio.h>
#include <stdlib.h>

const int ROWS = 6;
int i,j;
char ch;

int main()
{
    printf("Hello world!\n");
    for(i=1;i<=ROWS;i++)
    {
        for (ch='F',j=1; j<=i;ch--,j++)
            printf("%c", ch);
        printf("\n");
    }



    return 0;
}
