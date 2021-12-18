#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short bits=8*sizeof(short);
    unsigned short mask=0;


    while (bits-->0)
    {
        mask = mask | bitval;
        bitval = bitval<<1;
    }

    printf("Hello world!\n");
    return 0;
}
