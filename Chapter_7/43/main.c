#include <stdio.h>

int i,j,k;

int main(void)
{
    printf("Enter number: ");
    scanf("%d", &i);
    for (;i>2;i--)
    {
        for (k=0,j=2;j<=(i/2);j++)
        {
            if ((i%j)==0)//число не простое
            {
                k=1;
            }

        }
        if (k==0) printf("%d - prostoe\n", i);
    }



    return 0;
}
