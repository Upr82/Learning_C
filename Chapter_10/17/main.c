#include <stdio.h>


int main()
{
    int ar[3][4]={
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11}};

    printf("adres ar0 = %p, ar0 = %d\n", ar, **ar+5);

    return 0;
}
