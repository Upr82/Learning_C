#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 100

int count;
count = MAX+1;

int main()
{
    SetConsoleOutputCP(1251);
    while (--count>0)
    {
        printf("%d, бутылок родниковой воды на полке,\n", count);
        printf("%d, бутылок родниковой воды,\n", count);
        printf("возьми одну и пусти по кругу,\n");
        printf("останется %d бутылок!\n\n", count-1);

    }


    return 0;
}
