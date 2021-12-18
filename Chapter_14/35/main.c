#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L_SIZE 10
#define B_SIZE 15

void sum(char *s1, char *s2, char *s3);


int main()
{
    char ar1[L_SIZE]="String 1";
    char ar2[L_SIZE]="String 2";
    char ar3[B_SIZE];

    void (*pf)(char *, char *, char *);

    pf=sum;
    pf(ar1,ar2,ar3);

    printf("Result = %s\n",ar3);

    printf("Hello world!\n");
    return 0;
}

void sum(char *s1, char *s2, char *s3)
{
    if(B_SIZE>strlen(s1))
        strcpy(s3, s1);
    //else exit(1);
    //if((B_SIZE-strlen(s3))>strlen(s2))
        strncat(s3,s2, B_SIZE-strlen(s3)-1);
}
