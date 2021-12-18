#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{
    int urn[SIZE]={1,2,3,4,5,6};
    int sum(int ar[], int n);
    printf("Sum all units = %d", sum(urn, SIZE));


    return 0;
}
int sum(int ar[], int n)
{
    int i,total=0;
    for(i=0;i<n;i++)
        total+=ar[i];

    return total;
}
