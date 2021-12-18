#include <stdio.h>
#include <windows.h>

int main (void)
{
    SetConsoleOutputCP(1251);
    typedef int real;
    real n = 0;
    size_t t;
    t = sizeof(n);
    printf("n = %d, это %d байт.\n", n, t);


    return 0;
}
