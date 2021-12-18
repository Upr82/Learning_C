#include <stdio.h>
#include <stdlib.h>

char ch, sdvig;
int i,j,k;


int main()
{
    printf("Enter char:");
    scanf("%c", &ch);
    k=sdvig = ch - 64;
    printf("Sdvig = %d\n", sdvig);
    for(i=0;i<=(int)sdvig;i++)
    {
        for (ch='A',j=0, k=(sdvig-i);j<i;j++,ch++,k++)
        {

            printf("%*c", k, ch);

        }
        /*for (k=sdvig;j>=0; j--, ch--, k++)
        {

            printf("%*c", k, ch);
        }*/
        printf("\n");

    }

    return 0;
}
