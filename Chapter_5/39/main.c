#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    int i, j, list[10];
    printf("Hello world!\n");
    for (i=0;i<10;i++)
    {
        list[i] = 2*i+3;
        for (j=0;j<=i;j++)
            printf("%d", list[j]);
        printf("\n");
    }
    return 0;
}
