#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    int *p;
    p=days;
    printf("p = %p, *p = %d\n", p, *p);
    p=&days[0];
    printf("p+1 = %p, *(p+1) = %d\n", p+1, *(p+1));
    p=&days[0];

    printf("p = %p, *p = %d\n", p, *p);

    for(i=0;i<MONTHS;i++)
    {
        printf("[%2d] = %d\n", i+1, *(p+i));
    }

    return 0;
}
