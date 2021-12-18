#include <stdio.h>

double power(double, int);
double answer, temp;

int main(void)
{
    int status, exp;
    double mant;
    printf("Enter double mant & int exp(q for exit): ");
    while((status=scanf("%lf %d", &mant, &exp))==2)
    {
        answer=mant;
        temp=1.0;
        printf("%g ^ %d = %g\n", mant, exp, power(mant, exp));
        printf("Enter double mant & int exp(q for exit): ");
    }
    return 0;
}
double power(double mant, int exp)
{

    int i;
    if (mant==0.0)
    {

        if (exp!=0) return 0;
        else
        {
            printf("No result\n");
            return 1;
        }
    }
    if (exp>0)
    {
        power(mant, exp-1);
        answer*=mant;

    } else if (exp<0)
    {
        power(mant, exp+1);
        temp*=mant;
        answer=1.0/temp;
    } else
    {
        answer=1;
    }
    return answer;
}
