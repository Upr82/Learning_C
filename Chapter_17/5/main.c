#include <stdio.h>
#include <stdlib.h>

double sum(double x, double y);
double razn(double x, double y);
double prozv(double x, double y);
double delen(double x, double y);

void calc(double(*f)(double x, double y));

int main()
{
    printf("Hello world!\n");

    calc(sum);

    return 0;
}

double sum(double x, double y)
{return x+y;}
double razn(double x, double y)
{return x-y;}
double proizv(double x, double y)
{return x*y;}
double delen(double x, double y)
{
    if(!y)return x*y;
    else return 0;}
void calc(double(*f)(double x, double y))
{
    printf("rezult = %g\n", (*f)(1.0,2.0));
}
