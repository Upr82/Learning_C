#include <stdio.h>
#include <windows.h>

int a, flag=0, size;
float cost=1.0, bill;

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("¬ведите размер (size): ");
    scanf("%d", &size);
    /*if (size > 12)
        goto a;
    goto b;
    a: cost *= 1.05;
    flag = 2;
    b: bill = cost * flag;
    printf("cost = %g, flag = %d, bill = %g.", cost, flag, bill);*/

    if (size > 12)
    {
        cost *= 1.05;
        flag = 2;
    }
    bill = cost * flag;
    printf("cost = %g, flag = %d, bill = %g.", cost, flag, bill);





    return 0;
}
