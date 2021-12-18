#include <stdio.h>

int imax(int n, int m) {return n>m?n:m;}

int main(void)
{

    printf("Biggest number of %d and %d = %d\n", 3, 5, imax(3.0,5.0));


    return 0;
}


