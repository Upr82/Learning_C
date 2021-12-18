#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void show(const float *ar, int n);
void add(float *ar, int n, float delta);

int main()
{
    float urn[SIZE]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};

    show(urn, SIZE);
    add(urn, SIZE, 0.1);
    show(urn, SIZE);

    return 0;
}
void show(const float *ar, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%5.1f",*(ar+i));
    putchar('\n');
}

void add(float *ar, int n, float delta)
{
    int i;
    for(i=0;i<n;i++)
        *(ar+i)+=delta;
}
