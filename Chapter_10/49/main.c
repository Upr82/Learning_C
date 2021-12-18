#include <stdio.h>
int main(void)
{
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    void copy_arr(double t[], double s[], int n);
    void copy_ptr(double *t, double *s, int n);
    void copy_ptrs(double *t, double *ss, double *se);

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);

    return 0;
}

void copy_arr(double t[], double s[], int n)
{
    int i;
    for(i=0;i<n;i++)
        t[i]=s[i];
    for(i=0;i<n;i++)
        printf("target1[%d] = %g\n", i, t[i]);
    putchar('\n');
}
void copy_ptr(double *t, double *s, int n)
{
    int i;
    for(i=0;i<n;i++)
        *(t+i)=*(s+i);
    for(i=0;i<n;i++)
        printf("target2[%d] = %g\n", i, *(t+i));
    putchar('\n');
}
void copy_ptrs(double *t, double *ss, double *se)
{
    int i=0;
    while(ss<se)
    {
        *(t++)=*(ss++);
        printf("target3[%d] = %g\n", i, *(t-1));
        i++;
    }
}
