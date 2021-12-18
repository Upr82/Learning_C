#include <stdio.h>
#define YEARS 5
#define MONTHS 12
int main()
{
    const float rain[YEARS][MONTHS]={
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}};
    void sum_of_year(const float (*ar)[MONTHS], int n);
    void medium_of_months(const float ar[][MONTHS], int n);

    sum_of_year(rain, YEARS);
    medium_of_months(rain, YEARS);

    return 0;
}
void sum_of_year(const float(*ar)[MONTHS], int n)
{
    int y,m;
    double sum;
    for(y=0;y<n;y++)
    {
        for(m=0,sum=0.0;m<MONTHS;m++)
            sum+=*(*(ar+y)+m);
        printf("201%d = %g\n", y, sum);
    }
}
void medium_of_months(const float ar[][MONTHS], int n)
{
    int m,y;
    double sum;
    printf("%4s %4s %4s %4s %4s %4s %4s %4s %4s %4s %4s %4s\n",
           "Jan.","Feb.","Mar.","Apr.","May","June","Jule","Aug.","Sep.","Oct.","Nov.","Dec.");
    for(m=0;m<MONTHS;m++)
    {
        for(y=0,sum=0.0;y<n;y++)
            sum+=ar[y][m];
        printf("%-5g", sum/n);
    }
}
