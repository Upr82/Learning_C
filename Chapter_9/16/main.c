#include <stdio.h>

double garm(double, double);

int main(void)
{
    double a,b,c;
    printf("Enter double number #1 and #2:");
    scanf("%lf %lf", &a, &b);
    c=garm(a,b);
    printf("Medium garmon = %f\n", c);

    return 0;
}

double garm(double x, double y)
{
    double z;
    z=2/((1/x)+(1/y));

    return z;
}
