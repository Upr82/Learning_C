#include <stdio.h>
#include <windows.h>
#define PAGES 959

int a = 7777777;
int b = -7777777;

const double rent = 3852.99;


int main (void)
{
    printf("A = %9d,\n", a);
    printf("B = %012d,\n", b);
    printf("B = %-012d,\n\n", b);

    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n\n", PAGES);

    printf("*%f*\n", rent);
    printf("*%e*\n", rent);
    printf("*%4.2f*\n", rent);
    printf("*%3.1f*\n", rent);
    printf("*%10.3f*\n", rent);
    printf("*%10.3E*\n", rent);
    printf("*%+4.2f*\n", rent);
    printf("*%010.1f*\n", rent);






    return 0;
}
