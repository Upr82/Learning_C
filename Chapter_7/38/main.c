#include <stdio.h>

int i, kol_chet=0, chet=0, kol_nechet=0, nechet=0;

int main (void)
{
    printf("Enter int number, 0 for exit:\n");
    scanf("%d", &i);
    while (i)
    {
        if ((i%2)==0)
        {
            kol_chet++;
            chet+=i;
        }
        else
        {
            kol_nechet++;
            nechet+=i;
        }
    scanf("%d", &i);
    }
    printf("Kol-vo chetnih = %d, sredn chetnih = %.2f,\n", kol_chet, (float)chet/kol_chet);
    printf("Kol-vo nechetnih = %d, sredn nechetnih = %.2f,\n", kol_nechet, (float)nechet/kol_nechet);



    return 0;
}
