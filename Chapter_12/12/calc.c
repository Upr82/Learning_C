#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
//#include <time.h>

int my_rand(void);

//srand((unsigned int)time(0));

void sum(void)
{
    int a,b;
    a=my_rand();
    b=my_rand();
    printf("%d + %d = %d\n", a,b,a+b);
    count++;
}

void razn(void)
{
    int a,b;
    a=my_rand();
    b=my_rand();
    printf("%d - %d = %d\n", a,b,a-b);
    count++;
}

int my_rand(void)
{
    int result;
    result=(int)rand()%20-10;

    return result;
}
