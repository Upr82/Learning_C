#include <stdio.h>
#include <stdlib.h>
#define MASK 2

int main()
{
    unsigned char i=255, temp;
    temp=i;
    printf("i = %d, temp = %d\n", i, temp);

    temp=~temp;
    printf("REVERS:\n i = %d, temp = %d\n", i, temp);


    return 0;
}
