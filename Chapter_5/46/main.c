#include <stdio.h>
#include <stdlib.h>

const int ROWS = 6;
char abc[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i,j,k=0;

int main()
{
    printf("Hello world!\n");
    for (i=0;i<ROWS;i++)
    {
        for (j=0;j<=i;j++,k++)
        {
            printf("%c", abc[k]);
        }
        printf("\n");
    }



    return 0;
}
