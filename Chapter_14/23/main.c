#include <stdio.h>
#include <stdlib.h>

struct flex
{
    size_t count;
    double average;
    double scores[];
};
void showflex(const struct flex *temp);
int main()
{
    struct flex *pf1, *pf2;
    int n=5, i;
    double tot=0.0;

    pf1=malloc(sizeof(struct flex)+n*sizeof(double));
    pf1->count=n;
    for(i=0;i<n;i++)
    {
        pf1->scores[i]=20.0-i;
        tot+=pf1->scores[i];
    }
    pf1->average=tot/pf1->count;

    showflex(pf1);

    n=9;
    pf2=malloc(sizeof(struct flex)+n*sizeof(double));
    pf2->count=n;
    for(i=0, tot=0.0;i<pf2->count;i++)
    {
        pf2->scores[i]=20.0 - i/2.0;
        tot+=pf2->scores[i];
    }
    pf2->average=tot/pf2->count;

    showflex(pf2);

    free(pf1);
    free(pf2);

    printf("Hello world!\n");
    return 0;
}

void showflex(const struct flex *temp)
{
    int i;
    for(i=0;i<temp->count;i++)
        printf("[%d] = %g\n", i, temp->scores[i]);
    printf("Average = %g\n\n", temp->average);
}
