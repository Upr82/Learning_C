#include <stdio.h>

int n;
void calc(int i);

int main(void)
{
    printf("Enter int number (or 'q' for exit): ");
    while (scanf("%d", &n)==1)
    {

        calc(n);
        putchar('\n');
        printf("Enter int number (or 'q' for exit): ");
    }
    return 0;
}

void calc(int i)
{
    if (i>=2) calc(i/2);
    if (i%2) printf("1");
    else printf("0");
}
