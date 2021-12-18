#include <stdio.h>
#include <stdlib.h>
#define STR 3
#define COL 4

int main()
{
    int str=20,col=20;
    int arr[str][col];
    void wr_arr(int a, int b, int urn[a][b]);
    void pr_arr(int a, int b, int urn[a][b]);
    wr_arr(str, col, arr);
    pr_arr(str, col, arr);
    printf("Hello world!\n");
    return 0;
}
void wr_arr(int a, int b, int urn[a][b])
{
    int i, j, tot=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++,tot++)
            urn[i][j]=tot;
    }
}

void pr_arr(int a, int b, int urn[a][b])
{
    int i,j,total=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%5d", urn[i][j]);
            total+=urn[i][j];
        }
        printf("\n");
    }
    printf("Sum all unit = %d\n", total);
}
