#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*ptr)[2];
    int torf[2][2]={{12},{14,16}};
    ptr=torf;
    printf("p = %p, *p = %d\n", ptr, **ptr);
    printf("p+1 = %p, *(p+1) = %d\n", ptr+2, **(ptr+1));




    return 0;
}
