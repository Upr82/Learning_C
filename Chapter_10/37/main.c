#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main()
{
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
    void sum_days(const int [], int );
    int *p;
    p=&days[0];

    sum_days(days, MONTHS);
    printf("Size of array days = %d, size int = %d\n", sizeof(days), sizeof(int));

    return 0;
}
void sum_days(const int ar[], int n)
{
    int i,tot=0;
    for(i=0;i<n;i++)
        tot+=*(ar+i);
    printf("Sum all days in YEAR = %d\n", tot);
    printf("Size of adress array = %d\n", sizeof(ar));
}
