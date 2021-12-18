#include <stdio.h>
#include <stdlib.h>
#define STR 4
#define COL 3

int main()
{
    int urn[STR][COL]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
    };
    void sumstr(int (*ar)[COL], int n);
    void sumcol(int ar[][COL], int n);
    int sum(int [][COL], int);

    sumstr(urn, STR);
    sumcol(urn, STR);
    printf("SUM all units = %d.\n", sum(urn, STR));

    return 0;
}

void sumstr(int (*ar)[COL], int n)
{
    int s,c,tot;
    for(s=0;s<n;s++)
    {
        for(c=0,tot=0;c<COL;c++)
            tot+=ar[s][c];
        printf("Sum string #%d = %d\n", s+1, tot);
    }
}

void sumcol(int ar[][COL], int n)
{
    int c,s,tot;
    for(c=0;c<COL;c++)
    {
        for(s=0, tot=0;s<n;s++)
            tot+=ar[s][c];
        printf("SUM  column #%d = %d\n", c+1, tot);
    }
}

int sum(int ar[][COL], int n)
{
    int c,s,total=0;
    for(s=0;s<n;s++)
    {
        for(c=0;c<COL;c++)
            total+=ar[s][c];
    }
    return total;
}
