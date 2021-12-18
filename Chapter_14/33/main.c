#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 10

typedef int ARR[SIZE];

int main()
{
    ARR ar1={5,4,3,2,1, [8]=111};
    system("chcp 1251");

    for(int i=0;i<SIZE;i++)
    {
        printf("¹%d = %d\n", i, ar1[i]);
    }

    return 0;
}
