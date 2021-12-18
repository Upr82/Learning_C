#include <stdio.h>
#include <windows.h>

int help=0, sheds=0, index;
//float cost=1.0, bill;

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("¬ведите размер (index): ");
    scanf("%d", &index);

    /*if (index > 14)
        goto a;
    sheds =2;
    goto b;
    a: sheds = 3;
    b: help = 2 * sheds;*/

    if (index > 15) sheds = 3;
    else sheds = 2;
    help = 2 * sheds;








    printf("index = %d, sheds = %d, help = %d.", index, sheds, help);







    return 0;
}
