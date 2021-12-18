#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{
    int urn[SIZE]={1,2,3,4,5,6};
    void sum(int *ar, int n);
    int *p=urn;

    sum(urn, SIZE);
    sum(p, SIZE-1);


    return 0;
}
void sum(int *ar, int n)
{
    int i, total=0;
    for(i=0;i<n;i++)
    {
        total+=*(ar+i);
        printf("ar[%d] , sum = %d\n", i, total);
    }

}
