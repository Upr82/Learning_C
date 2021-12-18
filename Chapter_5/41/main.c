#include <stdio.h>
#include <stdlib.h>

int n=30,m;

int main()
{
    printf("Hello world!\n");
    while (++n<=33)
        printf("%d|", n);
    n = 30;
    do
        printf("%d|", n);
    while (++n<=33);
    printf("\n***\n");
    for (n=1;n*n<200;n+=4)
        printf("%d\n", n);
    printf("\n***\n");
    for (n=2, m=6;n<m;n*=2, m+=2)
        printf("%d %d\n", n, m);
    printf("\n***\n");
    for (n=5;n>0;n--)
    {
        for (m=0;m<=n;m++)
            printf("=");
        printf("\n");
    }

    return 0;
}
