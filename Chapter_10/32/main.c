#include <stdio.h>
#include <stdlib.h>
#define COLS 3
#define STR 5
int main()
{
    int urn[STR][COLS];
    void add_ar(int ar[][COLS], int n);
    void prn2d(const int ar[][COLS], int n);
    add_ar(urn, STR);
    prn2d(urn, STR);
    putchar('\n');
    prn2d((int [][3]){{12,11,10},{9,8,7},{6,5,4},{3,2,1}}, 4);



    return 0;
}
void prn2d(const int ar[][COLS], int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<COLS;j++)
            printf("%4d",ar[i][j]);
        printf("\n");
    }
}
void add_ar(int ar[][COLS], int n)
{
    int c,s,i=1;
    for(s=0;s<n;s++)
    {
        for(c=0;c<COLS;c++,i++)
            ar[s][c]=i;
    }
}
