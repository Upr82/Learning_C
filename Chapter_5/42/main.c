#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int index;
int by_twos[SIZE];

int main()
{
    printf("Hello world!\n");
    for (index=0; index<SIZE; index++)
        by_twos[index] = 2*index + 2;
    for (index=0; index<SIZE; index++)
        printf("%d ", by_twos[index]);
    printf("\n");





    return 0;
}
