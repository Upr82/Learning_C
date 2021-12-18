#include <stdio.h>

void larger (double * pa, double * pb);

int main(void)
{
    double a,b;
    printf("Enter double number #1 and #2: ");
    scanf("%lf %lf", &a, &b);
    printf("Before function: a = %f, b = %f\n", a, b);
    larger(&a,&b);
    printf("After function: a = %f, b = %f", a, b);

    return 0;
}
void larger(double * pa, double * pb)
{
    if(*pa>*pb) *pb=*pa;
    else *pa=*pb;

}
