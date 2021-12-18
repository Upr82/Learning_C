#include <stdio.h>
#include <stdlib.h>

int i = 1;

int main()
{
    printf("Hello world!\n");
    while (i<21)
    {
        printf("i = %d, i2 = %d\n", i, i*i++);
    }
    int i = 0;
    while (i++<21)
    {
        printf("i = %d, i2 = %d\n", i, i*i);
    }
    return 0;
}
