#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef unsigned char BYTE;
typedef char NAME[SIZE];

int main()
{
    BYTE i;
    NAME Anton="Anton";

    /*for(i=0;i<256;i++)
        printf("i = %d\n", i);*/

    puts(Anton);

    printf("Hello world!\n");
    return 0;
}
