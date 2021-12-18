#include <stdio.h>


int main()
{
    double source[7]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    double target[3];

    void copy_data(double *t,double *s, int n);

    copy_data(target, source+2,3);



    return 0;
}
void copy_data(double *t, double *s, int n)
{
    int i;
    for(i=0;i<n;i++)
        *(t+i)=*(s+i);
    for(i=0;i<n;i++)
        printf("%g ", *(t+i));
}
