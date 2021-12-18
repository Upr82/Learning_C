#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int i=1, a=1;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");

    for(printf("i = %d ", i), printf("a = %d\n", a); i<=10; ++i, a += i)
        printf("i = %2d, a = %3d\n", i, a);
    printf("i = %2d, a = %3d - после цикла", i, a);


    return 0;
}
