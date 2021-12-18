#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int n;

int main()
{
    SetConsoleOutputCP(1251);
    printf("    n  n в кубе\n");
    for(n=1;n<=6;++n) printf("%5d%5d\n", n, n*n*n);




    return 0;
}
