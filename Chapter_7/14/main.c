#include <stdio.h>
int p,q;


int main (void)
{
    printf("Input p: ");
    scanf("%d", &p);
    while (p>0)
    {
        printf("input q: ");
        scanf("%d", &q);
        while (q>0)
        {
            if (q>100) break;
            printf("%d * %d = %d\n", p, q, p*q);
            printf("input q: ");
            scanf("%d", &q);
        }
        //if (q>100) break;
        printf("Input p: ");
        scanf("%d", &p);
    }




    return 0;
}
