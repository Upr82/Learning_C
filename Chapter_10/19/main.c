#include <stdio.h>
#define SIZE 4


int main(void)
{
    short sh[SIZE];
    short *pts;
    short index;
    double db[SIZE];
    double *ptd;
    pts=sh;
    ptd=db;

    printf("%19s %15s\n", "adress sh", "db");
    for(index=0;index<SIZE;index++)
    {
        printf("%d  %p  %p\n", index, &sh[index], &db[index]);
    }
    putchar('\n');
    for(index=0;index<SIZE;index++)
    {
        printf("%d  %p  %p\n", index, pts+index, ptd+index);
    }



    return 0;
}
