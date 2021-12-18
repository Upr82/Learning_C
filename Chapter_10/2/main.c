#include <stdio.h>
#define MASS 12



int main()
{
    int i;
    int days[MASS]={31,28,31,[5]=13,1,2,3,[1]=555};

    printf("#i   days[i]\n");

    for(i=0;i<MASS;i++)
        days[i]=(i+1)*2;


    for(i=0;i<MASS;i++)
    printf("#%2d %8d\n", i, days[i]);
    return 0;
}
