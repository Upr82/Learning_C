#include <stdio.h>
#include <stdlib.h>
#define COLS 4

int main()
{
    int total1, total2, total3;
    int sum(const int ar[], int n);
    int sum2d(const int ar[][COLS], int n);
    int *p1;
    int (*p2)[COLS];
    p1 = (int [6]){1,2,3,4,5,6};
    p2 = (int [3][COLS]){{12,11,10,9},{8,7,6,5},{4,3,2,1}};
    total1=sum(p1, 2);
    printf("Sum units of array #1 = %d\n", total1);
    total2=sum2d(p2, 3);
    printf("Sum units of array #2 = %d\n", total2);
    total3=sum((int []){1,2,3,4,5,6,7,8}, 8);
    printf("Sum units of array #3 = %d\n", total3);



    return 0;
}

int sum(const int ar[], int n)
{
    int all=0, i;
    for(i=0;i<n;i++)
        all+=ar[i];

    return all;
}

int sum2d(const int ar[][COLS], int n)
{
    int all=0, i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<COLS;j++)
            all+=ar[i][j];
    }
    return all;
}
