#include <stdio.h>
#include <stdlib.h>

int max(int x, int y, int z);

int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    printf("Maximum number = %d", max(a,b,c));


    return 0;
}

int max(int x, int y, int z)
{
    int d;
    d=(x>y)?x:y;
    if (d>z) return d;
    else return z;
}
