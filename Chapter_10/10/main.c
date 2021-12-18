#include <stdio.h>
#include <windows.h>


int main(void)
{
    int *p;
    int a;
    p=&a;
    *p=24;
    printf("a = %d, p = %p, *p = %d", a, p, *p);




    return 0;
}
