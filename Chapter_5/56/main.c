#include <stdio.h>
#include <stdlib.h>

float a,b,c,d,sum1,sum2;
int i,j;

int main()
{
    printf("Enter quantity (quit nunber <=0): ");
    while (scanf("%d", &i)==1 && i>0)
    {


    for (j=2, sum1=1.0, sum2=1.0;j<=i;j++)
    {
        sum1 += 1.0/j;
        if(j%2)
        {
            sum2 += 1.0/j;
        } else sum2 += (1.0/j)* -1.0;
    }
    printf("sum1 = %g\n", sum1);
    printf("sum2 = %g\n", sum2);

    printf("Enter quantity (quit nunber <=0): ");
    }



    return 0;
}
