#include <stdio.h>
#define SIZE 8
int main(void)
{
    double source [SIZE]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
    void swap(double ar[], int n);
    swap(source, SIZE);

    return 0;
}
void swap(double ar[], int n)
{
    int i,j;
    double prom;

    for(i=0;i<n;i++)
    {
        printf("index [%d] = %g\n", i, ar[i]);
    }
    for(i=0,j=(n-1);i<(n/2);i++,j--)
    {
        prom=ar[i]+ar[j];
        ar[i]=prom-ar[i];
        ar[j]=prom-ar[i];
    }
    putchar('\n');
    for(i=0;i<n;i++)
    {
        printf("index [%d] = %g\n", i, ar[i]);
    }


}
