#include <stdio.h>
#define STR 3
#define COL 5
int main(void)
{
    double storage[STR][COL];
    void add_data(double (*ar)[COL], int n);
    void show(const double ar[][COL], int n);
    void medium_string(const double ar[][COL], int n);
    double medium(const double(*ar)[COL], int n);
    double maximum(const double (*ar)[COL], int n);


    add_data(storage, STR);
    show(storage, STR);
    medium_string(storage, STR);
    printf("\nAverage value of the data array = %g", medium(storage, STR));
    printf("\nMaximim value of the data array = %g\n", maximum(storage, STR));

    return 0;
}
void add_data(double (*ar)[COL], int n)
{
    int s;
    for(s=0;s<n;s++)
    {
        printf("Input 5 numbers #%d (double): \n", s+1);
        scanf("%lf%lf%lf%lf%lf", &ar[s][0],&ar[s][1],&ar[s][2],&ar[s][3],&ar[s][4]);
        putchar('\n');
    }
}
void show(const double ar[][COL], int n)
{
    putchar('\n');
    int s,c;
    for(s=0;s<n;s++)
    {
        for(c=0;c<COL;c++)
            printf("%5g", ar[s][c]);
        putchar('\n');
    }
}
void medium_string(const double ar[][COL], int n)
{
    putchar('\n');
    int c,s;
    double sum;
    for(s=0;s<n;s++)
    {
        for(c=0,sum=0.0;c<COL;c++)
            sum+=ar[s][c];
        printf("Medium of string #%d = %g\n", s, sum/COL);
    }
}
double medium(const double (*ar)[COL], int n)
{
    double average=0.0;
    int s,c;
    for(s=0;s<n;s++)
    {
        for(c=0;c<COL;c++)
            average+=ar[s][c];
    }
    average/=(COL*n);
    return average;
}
double maximum(const double (*ar)[COL], int n)
{
    double max=ar[0][0];
    int s,c;
    for(s=0;s<n;s++)
    {
        for(c=0;c<COL;c++)
            if(max<ar[s][c]) max=ar[s][c];
    }
    return max;
}
