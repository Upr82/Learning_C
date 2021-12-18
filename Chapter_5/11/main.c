#include <stdio.h>
#include <stdlib.h>

float a = 1.6, b = 1.7;
int i1, i2;
int main()
{
    i1= a + b;
    i2= (int)a + (int)b;
    printf("Var1: a+b = %d\n", i1);
    printf("Var2: a+b = %d\n", i2);


    return 0;
}
