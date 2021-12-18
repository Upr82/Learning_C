#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARR 10

typedef struct lens {
float foclen;
float fstop;
char brand[30];
}LENS;

int main()
{
    int i;
    LENS arr[ARR]={[2]={500.0,2.0,"Remarkatar"}};
    /*arr[2].foclen=500.0;
    arr[2].fstop=2.0;
    strcpy(arr[2].brand, "Remarkatar");*/

    for(i=0;i<ARR;i++)
    {
        printf("Struct #%d\n", i+1);
        printf("Brand = %s, foclen = %g, fstop = f/%g\n",
               arr[i].brand, arr[i].foclen, arr[i].fstop);
    }

    printf("\nHello world!\n");
    return 0;
}
