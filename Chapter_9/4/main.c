#include <stdio.h>
#include <stdlib.h>

void up_and_down(int n);

int main()
{
    //printf("Hello world!\n");
    up_and_down(1);




    return 0;
}

void up_and_down(int n)
{
    printf("Level %d, n adress memory %p\n", n, &n);
    if (n<4) up_and_down(n+1);
    printf("Level %d, n adress memory %p\n", n, &n);
}
