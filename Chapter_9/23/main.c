#include <stdio.h>

void Fibonacci(int);

int main(void)
{
    int n;
    printf("Enter number Fibonacci(for quit q): ");
    while(scanf("%d", &n)==1 && n>0)
    {
        Fibonacci(n);
        printf("\nEnter number Fibonacci(for quit q): ");
    }
    return 0;
}

void Fibonacci(int n)
{
    unsigned long a=0, b=1, temp;
    int i;
    for (i=0;i<n;i++)
    {
        temp=b+a;
        a=b;
        b=temp;
        //fib=a+b;
        printf("#%d = %lu\n", i+1, a);
    }
}
