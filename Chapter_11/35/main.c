#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    system("chcp 1251");
    system("cls");
    int n;

    for(n=0;n<argc;n++)
        printf("%d: %s\n", n, argv[n]);



    printf("Hello world!\n");
    return 0;
}
