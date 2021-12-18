#include <stdio.h>
#include <stdlib.h>

char ch;
int sdvig, i, j;

int main()
{
    printf("Enter char:");
    scanf("%c", &ch);
    sdvig = ch-64;
    for (i=0;i<sdvig;i++)
    {
        for (ch='A', printf("%*c", (sdvig-i), ch), j=0;j<i;j++)
        {
            printf("%c", ++ch);
        }

        for (j=i; j>0;j--)
        {
            printf("%c", --ch);
        }
        printf("\n");

    }

    return 0;
}
