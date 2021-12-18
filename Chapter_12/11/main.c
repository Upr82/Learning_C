#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR "ТОЖЕ ЛИТЕРАЛ"

int a=30;
char masa[]="Static array with upper link.";

int main()
{
    system("chcp 1251");
    int b=40;
    int *pti;
    char *pta;
    char *ptb="String literal.";
    char masb[]="Auto array no link.";
    static char masc[]="Static array with lower link.";

    pti=(int *)malloc(sizeof(int));
    pta=(char *)malloc(strlen("Dynamic string.")+1);
    if(pta==NULL)
    {
        printf("Жопа. Места не нашлось.\n");
        exit(EXIT_FAILURE);
    }
    //else exit(EXIT_SUCCESS);
    strcpy(pta, "Dynamic string.");
    *pti=50;

    printf("a = %d, %p\n", a,&a);
    printf("%s, %p\n", masa,masa);
    printf("b = %d, %p\n", b,&b);
    printf("ptb = %s, %p\n", ptb, ptb);
    printf("%s, %p\n", masb,masb);
    printf("%s, %p\n", masc,masc);
    printf("pti = %d, %p\n", *pti, pti);
    printf("pta = %s, %p\n", pta, pta);
    printf("%s, %p\n", "Строка в кавычках", "Строка в кавычках");
    printf("%s, %p\n", STR, STR);

    free(pti);
    free(pta);
    printf("End!\n");
    return 0;
}
