#include <stdio.h>

double min(double, double);

int main(void)
{
    int status;
    double a,b;
    printf("Enter number #1 and #2: ");
    status=scanf("%lf %lf", &a, &b);
    printf("a = %f, b = %f, read val = %d\n",
           a,
           b,
           status);

    printf("Minimum number = %f", min(a, b));

    return 0;
}

double min(double x, double y)
{
    return ((x<y)?x:y);
}
