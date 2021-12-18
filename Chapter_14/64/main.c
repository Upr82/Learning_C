#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

double sum(double a, double b);
double razn(double a, double b);
double proizv(double a, double b);
double delen(double a, double b);

int main()
{
    int i;
    double x=10.0, y=2.5;
    double(*pf[SIZE])(double, double)={sum, razn, proizv, delen};
    //pf[1]=sum;

    for(i=0;i<SIZE;i++)
            printf("%g and %g = %g\n",x, y, pf[i](x,y));


    //printf("Hello world!\n");
    return 0;
}
double sum(double a, double b)
{
    return a+b;
}
double razn(double a, double b)
{
    return a-b;
}
double proizv(double a, double b)
{
    return a*b;
}
double delen(double a, double b)
{
    return a/b;
}
