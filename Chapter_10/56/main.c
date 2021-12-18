#include <stdio.h>
#define STR 3
#define COL 5
int main(void)
{
    double source[STR][COL]={
    {1.1,2.2,3.3,4.4,5.5},
    {6.6,7.7,8.8,9.9,10.1},
    {11.11,12.12,13.13,14.14,15.15}
    };

    int str=3,col=5;
    double target[str][col];
    void data_copy(int a,int b,double t[a][b], double s[a][b]);
    void show_ar(int a, int b, double ar[a][b]);
    data_copy(str, col, target, source);
    show_ar(STR,COL, source);
    show_ar(STR,COL, target);

    return 0;
}
void data_copy(int a, int b, double t[a][b], double s[a][b])
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            t[i][j]=s[i][j];
            //printf("%7g", t[i][j]);
        }
        //putchar('\n');
    }
}
void show_ar(int a, int b, double ar[a][b])
{
    int i, j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            printf("%7g", ar[i][j]);
        putchar('\n');
    }
}
