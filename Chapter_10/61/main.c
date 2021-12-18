#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Input number string and column: ");
    scanf("%d%d", &a,&b);
    double storage[a][b];
    void add_data(int i, int j, double ar[i][j]);
    void show(int i, int j, const double ar[i][j]);
    void medium_string(int i, int j, const double ar[i][j]);
    double medium(int i, int j, const double ar[i][j]);
    double maximum(int i, int j, const double ar[i][j]);


    add_data(a,b,storage);
    show(a,b,storage);
    medium_string(a,b,storage);
    printf("\nAverage value of the data array = %g", medium(a,b,storage));
    printf("\nMaximim value of the data array = %g\n", maximum(a,b,storage));

    return 0;
}
void add_data(int i, int j, double ar[i][j])
{
    int s,c;
    for(s=0;s<i;s++)
    {
        printf("Input %d numbers #%d (double): \n",i, s+1);
        for(c=0;c<j;c++)
        {
            printf("Input number [%d][%d] = ", s,c);
            scanf("%lf", &ar[s][c]);
        }
        putchar('\n');
    }
}
void show(int i, int j, const double ar[i][j])
{
    putchar('\n');
    int s,c;
    for(s=0;s<i;s++)
    {
        for(c=0;c<j;c++)
            printf("%5g", ar[s][c]);
        putchar('\n');
    }
}
void medium_string(int i, int j, const double ar[i][j])
{
    putchar('\n');
    int c,s;
    double sum;
    for(s=0;s<i;s++)
    {
        for(c=0,sum=0.0;c<j;c++)
            sum+=ar[s][c];
        printf("Medium of string #%d = %g\n", s, sum/j);
    }
}
double medium(int i, int j, const double ar[i][j])
{
    double average=0.0;
    int s,c;
    for(s=0;s<i;s++)
    {
        for(c=0;c<j;c++)
            average+=ar[s][c];
    }
    average/=(i*j);
    return average;
}
double maximum(int i, int j, const double ar[i][j])
{
    double max=ar[0][0];
    int s,c;
    for(s=0;s<i;s++)
    {
        for(c=0;c<j;c++)
            if(max<ar[s][c]) max=ar[s][c];
    }
    return max;
}
