#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float deposit = 1000000.0;
int i;


int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");
    for (i=1; deposit>0; i++)
    {
        deposit = deposit*1.08 - 100000.0;
        printf("В %2d год депозит = $%g\n", i, deposit);
    }




    return 0;
}
