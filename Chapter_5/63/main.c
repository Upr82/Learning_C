#include <stdio.h>
#include <stdlib.h>

char ch, i, j, k;
const char start = 65;


int main()
{
    printf("Enter symbol: ");
    scanf("%c", &ch);

    for (i = ch-start;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c", ' ');

        }

        for(k=0;k<(ch-start-i);k++)
        {
            printf("%c", start+k);
        }


        for(;k>=0;k--)
        {
            printf("%c", start+k);
        }
        printf("\n");
    }


    return 0;
}
