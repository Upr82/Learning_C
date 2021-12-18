#include <stdio.h>
#define COLS 4

void sum1d(int *ar, int n);
void sum2d(int (* ar)[2], int n);
int main(void)
{
    int *p1;
    int (*p2)[2];
    p1 = (int [COLS]){1,2,3,4};
    p2 = (int [COLS][2]){{1,2},{3,4},{5,6},{7,8}};

    sum1d(p1, COLS);
    putchar('\n');
    sum2d(p2, COLS);

    return 0;
}
void sum1d(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%3d", *(p+i));//тут коммент
}


void sum2d(int (*ar)[2], int n)
{
    int s,c;
    for(s=0;s<n;s++)
    {
        for(c=0;c<2;c++)
            printf("%3d", *(*(ar+s)+c));
        putchar('\n');
    }
}
