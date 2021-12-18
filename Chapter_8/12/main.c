#include <stdio.h>

int i=0;

int main(void)
{
    while(getchar()!=EOF)
        i++;
    printf("i= %d\n", i);


    return 0;
}
