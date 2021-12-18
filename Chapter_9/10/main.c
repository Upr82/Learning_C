#include <stdio.h>

void exchange(int * a, int * b);

int main(void)
{
    int x=10,y=5;
    printf("Before: x = %d, y = %d\n", x, y);
    exchange(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);


    return 0;
}

void exchange(int * a, int * b)
{
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;

}
