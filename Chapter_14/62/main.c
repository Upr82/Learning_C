#include <stdio.h>
#include <stdlib.h>

typedef struct gas {
float distance;
float gals;
float mpg;
} GAS;

GAS calc(GAS temp);
void calc2(GAS *temp);

int main()
{
    GAS my_gas={1000.0,100.0};

    //my_gas=calc(my_gas);
    calc2(&my_gas);
    printf("Distance = %g, time = %g, speed = %g\n",
           my_gas.distance, my_gas.gals, my_gas.mpg);
    return 0;
}

GAS calc(GAS temp)
{
    temp.mpg=temp.distance/temp.gals;
    return temp;
}
void calc2(GAS *temp)
{
    temp->mpg=temp->distance/temp->gals;
}
