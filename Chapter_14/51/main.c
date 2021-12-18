#include <stdio.h>
#include <stdlib.h>

struct flex {
int count;
float average;
float arr[];
};

void show(const struct flex *ps);
int main()
{
    system("chcp 1251");
    struct flex *pf1=NULL, *pf2=NULL;
    int n=6, i;
    float sum;
    pf1=(struct flex *)malloc(sizeof(struct flex)+n*sizeof(float));
    pf1->count=n;
    for(i=0,sum=0.0;i<pf1->count;i++)
    {
        pf1->arr[i]=20.0-i;
        sum+=pf1->arr[i];
    }
    pf1->average=sum/pf1->count;
    show(pf1);

    n=10;
    pf2=(struct flex *)malloc(sizeof(struct flex) + n*sizeof(float));
    pf2->count=n;
    for(i=0,sum=0.0;i<pf2->count;i++)
    {
        pf2->arr[i]= 20.0 - i/2.0;
        sum+=pf2->arr[i];
    }
    pf2->average = sum / pf2->count;
    show(pf2);

    free(pf1);
    free(pf2);
    pf1=NULL;
    pf2=NULL;

    printf("Hello world!\n");
    return 0;
}
void show(const struct flex *ps)
{
    int i;
    printf("Ёлементов: %d\n", ps->count);
    printf("—реднее значение: %g\n", ps->average);
    for(i=0;i< ps->count; i++)
        printf("  [%d] = %g\n", i, ps->arr[i]);
    putchar('\n');
}
