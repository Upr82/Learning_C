#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

struct flex {
int count;
float arr[];
};

int main()
{
    int i;
    struct flex *pf1=NULL, *pf2=NULL;
    pf1=(struct flex *)malloc(sizeof(struct flex)+SIZE*sizeof(float));

    pf1->count=SIZE;
    for(i=0;i<pf1->count;i++)
        {
            pf1->arr[i]=20.0-i;
            printf("[%d] = %g\n", i, pf1->arr[i]);
        }
    printf("pf1 = %p, pf1+1 = %p, pf2 = %p\n", pf1, pf1+1, pf2);
    pf2=pf1;
    printf("pf1 = %p, pf1+1 = %p, pf2 = %p\n", pf1, pf1+1, pf2);
    for(i=0;i<pf2->count;i++)
        {
            pf2->arr[i]=20.0-i;
            printf("[%d] = %g\n", i, pf2->arr[i]);
        }

    free(pf1);
    pf1=NULL;


    printf("\nHello world!\n");
    return 0;
}
