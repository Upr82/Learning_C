#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;

    for(i=argc-1;i>0;i--)
        printf("%s ", argv[i]);

    //printf("Hello world!\n");
    return 0;
}
