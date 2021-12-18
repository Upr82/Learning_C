#include <stdio.h>
#define SIZE 8
int main(void)
{
    const double source[SIZE]={-345.6,-7645.645,-86.46,-765.732,-7464.8,-5678.45,-9877.34,-34678.7};
    double razn(const double ar[], int n);
    printf("Razn = %g",razn(source, SIZE));


    return 0;
}
double razn(const double ar[], int n)
{
    double d_min=ar[0], d_max=ar[0], r;
    int i;
    for(i=0;i<n;i++)
    {
        if(d_min>ar[i]) d_min=ar[i];
        if(d_max<ar[i]) d_max=ar[i];
    }
    r=d_max-d_min;


    return r;
}
