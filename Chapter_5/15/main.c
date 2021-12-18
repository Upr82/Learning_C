#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int i, j;

int main()
{
    SetConsoleOutputCP(1251);
    printf("¬ведите целое положительное число:");
    scanf("%d", &i);
    j=i+10;

    while (i<=j)
    {
        printf("%d\n", i);
        i++;
    }



    return 0;
}
