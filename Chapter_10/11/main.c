#include <stdio.h>
#define STRING 2
#define COLUMN 3

int func_i(int *, int*);
double func_d (double *, int, int);

int main(void)
{
    int i1,i2;

    double array [STRING][COLUMN]={
        {1.2,2.3,3.4},
        {4.5,5.6,6.7}};

    printf("Enter int number #1 & #2: ");
    scanf("%d %d", &i1, &i2);
    printf("Summ %d + %d = %d\n", i1, i2, func_i(&i1, &i2));

    printf("Summ unit array = %g\n", func_d(array, STRING, COLUMN));

    return 0;
}

int func_i(int *a, int *b)
{
    return *a + *b;
}

double func_d (double *arr, int s, int c)
{
    double sum=0.0;
    int i;

    for (i=0;i<(c*s);i++)
    sum+=arr[i];
    //printf("Start adress arr[0] =%p, arr[0] = %g\n", arr, *arr);
        return sum;
}
