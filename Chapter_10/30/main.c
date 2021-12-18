#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*void sum(int *ar, int n);
    sum((int [6]){1,2,3,4,5,6,},6);*/




    return 0;
}
void sum(int *ar, int n)
{
    int i, total=0;
    for(i=0;i<n;i++)
        total+=*(ar+i);
    printf("Sum units = %d\n", total);
}
