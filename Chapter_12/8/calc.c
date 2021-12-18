#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include <time.h>



int my_rand(int edges, int cubes)
{
    int result=0, i=0, scores=0;

    srand((unsigned int)time(0));
    for(i=0;i<cubes;i++)
    {
        scores=rand()%edges+1;
        total+=scores;
        result+=scores;
        printf("Кость №%d - %d очка(ов)\n", i+1, scores);
    }


    count++;
    return result;
}
