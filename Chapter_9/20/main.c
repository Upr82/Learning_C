#include <stdio.h>

double power(double, int);

int main(void)
{
    int status, exp;
    double mant;
    printf("Enter double mant & int exp(q for exit): ");
    while((status=scanf("%lf %d", &mant, &exp))==2)
    {
        printf("%g ^ %d = %g\n", mant, exp, power(mant, exp));
        printf("Enter double mant & int exp(q for exit): ");
    }
    return 0;
}
double power(double mant, int exp)
{
    double answer;
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
        for(i=1,answer=mant;i<exp;i++)
            answer*=mant;
    } else if (exp<0)
    {
        for(i=1,answer=mant;i<-(exp);i++)
            answer*=mant;
            answer=1.0/answer;
    } else
    {
        answer=1;
    }
    return answer;
}
