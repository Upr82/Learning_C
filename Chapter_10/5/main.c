#include <stdio.h>
#include <limits.h>
#include <float.h>

#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    char name[SIZE];
    char * pch;
    pti=dates;
    ptf=bills;
    pch=name;

    printf("1 byte = %d bits\n", CHAR_BIT);
    printf("Short = %d bytes, min = %d, max = %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("double = %d bytes, min = %e, max = %e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("%21s %16s %16s\n", "short", "double", "char");
    for(index=0;index<SIZE;index++)
    {
        /*pti=&dates[index];
        ptf=&bills[index];
        pch=&name[index];

        printf("%d %19p %15p %15p\n", index, pti, ptf, pch);*/
        printf("%d %19p %15p %15p\n", index, &dates[index], &bills[index], &name[index]);

    }

    printf("\n");
    for(index=0;index<SIZE;index++)
    {
        printf("%d %19p %15p %15p\n", index, pti+index, ptf+index, pch+index);
    }





    return 0;
}
