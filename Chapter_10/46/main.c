#include <stdio.h>
#include <stdlib.h>
#define COLS 4

int main()
{
    void sum1d(int *ar, int n);
    int urn1[COLS]={1,2,3,4};





    return 0;
}
void sum1d(int *ar, int n)
{
    int i, total =0;
    for(i=0;i<n;i++)
        total+=*(ar+i);
    printf("Sum = %d\n", total);
}
