//#include <stdio.h>
//#include <stdlib.h>
#include "new.h"

int my_rand(int e, int c)
{
    int result=0, i, num;
    for(i=0;i<c;i++)
    {
        num=rand()%e+1;
        result+=num;
    }

    return result;
}
