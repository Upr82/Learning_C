#include <stdio.h>
#define SIZE 6

int main(void)
{
    int urn[SIZE]={0,1,2,3,4,5};
    void prnt(const int *ar, int n);
    void add(int *ar, int n);

    prnt(urn, SIZE);
    add(urn, SIZE);
    prnt(urn, SIZE);

    return 0;
}
void prnt(const int *ar, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("unit array [%d] = %d\n", i, ar[i]);
}

void add(int *ar, int n)
{
    int i;
    for(i=0;i<n;i++)
        ar[i]+=1;
}
