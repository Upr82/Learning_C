#include <stdio.h>
#include <stdlib.h>
#define STR 3
#define COL 4

int main()
{
    void sum_str(int (*ar)[COL], int n);
    void sum_col(int ar[][COL], int n);
    void sum_all(int (*)[COL], int);
    int urn[STR][COL]={ {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12} };
    int (*p)[COL]=urn;
    sum_str(p, STR);
    sum_col(urn, STR);
    sum_all(urn, STR);

    return 0;
}
void sum_str(int (*ar)[COL], int n)
{
    int s,c,tot;
    for(s=0;s<n;s++)
    {
        for(c=0, tot=0;c<COL;c++)
            tot+=*(*(ar+s)+c);
        printf("Sum string [%d] = %d\n", s, tot);
    }
}
void sum_col(int ar[][COL], int n)
{
    int s,c,tot;
    for(c=0;c<COL;c++)
    {
        for(s=0, tot=0;s<n;s++)
            tot+=ar[s][c];
        printf("Sum column [%d] = %d\n", c, tot);
    }
}
void sum_all(int (*ar)[COL], int n)
{
    int s,c,tot;
    for(s=0, tot=0;s<n;s++)
    {
        for(c=0;c<COL;c++)
            tot+=*(*(ar+s)+c);
    }
    printf("Sum all = %d\n", tot);
}







