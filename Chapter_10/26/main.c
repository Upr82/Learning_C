#include <stdio.h>
#include <stdlib.h>
#define STR 3
#define COL 4

int main()
{
    int urn[STR][COL]={
    {1,2, 3, 4},
    {5,6, 7, 8},
    {9,10,11,12}};
    void sumstr(int ar[][COL], int n);
    void sumcol(int (*ar)[COL], int n);
    void sum(int ar[][COL], int n);

    sumstr(urn, STR);
    sumcol(urn, STR);
    sum(urn, STR);

    return 0;
}

void sumstr(int ar[][COL], int n)
{
    int i,j, all;
    for(i=0;i<n;i++)
    {
        for (j=0, all=0;j<COL;j++)
            all+=ar[i][j];
        printf("Sum string #%d = %d\n", i+1, all);
    }
}

void sumcol(int (*ar)[COL], int n)
{
    int s,c,all;
    for(c=0;c<COL;c++)
    {
        for(s=0,all=0;s<n;s++)
            all+=ar[s][c];
        printf("Sum column #%d = %d\n", c+1, all);
    }
}

void sum(int ar[][COL], int n)
{
    int s,c,all;
    for(s=0,all=0;s<n;s++)
    {
        for(c=0;c<COL;c++)
            all+=ar[s][c];
    }
    printf("Sum all units = %d\n", all);
}
