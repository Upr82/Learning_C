#include <stdio.h>
#include <stdlib.h>

int mass [8];
int i,j,znak;

int main()
{
    printf("Hello world!\n");
    mass[0] = 1;
    for (i=1;i<8;i++)
    {
        for (j=1,znak=2;j<i;j++)
        {
            znak *= 2;
        }
        mass[i]=znak;
    }
    i=0;
    do
    {
        printf("#%d =%8d\n", i, mass[i]);
        i++;
    }
    while (i<8);


    return 0;
}
