#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, mask=127;

    printf("num = %d, mask = %d, num|=mask = %d\n", num, mask, num|mask);

    num=
    printf("num = %d, mask = %d, num|=mask = %d\n", num, mask, num^mask);

    printf("Hello world!\n");
    return 0;
}
