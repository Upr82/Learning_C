#include <stdio.h>
#define SIZE 8
int main(void)
{
    const double source[SIZE]={-345.6,-7645.645,-86.46,-765.732,-7464.8,-5678.45,-9877.34,-34678.7};
    int index_max_unit(const double ar[], int n);

    printf("Index max unit = %d\n", index_max_unit(source, SIZE));






    return 0;
}
int index_max_unit(const double ar[], int n)
{
    int i, j;
    double maxx=ar[0];
    for(j=0;j<n;j++)
        if(maxx<ar[j]) i=j;

    return i;
}
