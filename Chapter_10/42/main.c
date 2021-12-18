#include <stdio.h>
#include <stdlib.h>

int zippo[4][2]={{1,2},{3,4},{5,6},{7,8}};


int main()
{
    int i,j;
    printf("Zippo = %p, zippo = %d, zippo[0] = %p, zippo[0] = %d\n",
           zippo, *zippo, zippo[0], *zippo[0]);
    printf("Zippo+1 = %p, zippo+1 = %d, zippo[1] = %p, zippo[1] = %d\n",
           zippo+1, *(zippo+1), zippo[0]+1, *zippo[1]);
    printf("&zippo = %p\n", &zippo);
    printf("zippo[2][1] = %d\n", *(*(zippo+2)+1));
    int (*pz)[2];
    pz=zippo;
    printf("pz = %p, pz+1 = %p\n", pz, pz+1);
    printf("*pz = %d, *pz+1 = %d\n", **pz, *(*(pz+2)+1));


    return 0;
}
