#include <stdio.h>
#include <stdlib.h>
#include "new.h"

int roll_count=0;

static int rollem(int sides)
{
    int roll;
    roll=rand()%sides+1;
    ++roll_count;

    return roll;
}
int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;
    if (sides<2)
    {
        printf("����� �� ������ ���� ������.\n");
        return -2;
    }
    if (dice<1)
    {
        printf("����� �� ������ ������ ������.\n");
        return -1;
    }
    for(d=0;d<dice;d++)
        total+=rollem(sides);


    return total;
}
