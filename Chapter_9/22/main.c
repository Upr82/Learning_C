#include <stdio.h>

void to_base_n(int, int);
int sys, number;
int main()
{


    printf("Enter int Number & system (2-10), for quit Q:\n");
    while(scanf("%d %d", &number, &sys)==2 && (sys>=2 && sys<=10) )
    {
        to_base_n(number, sys);
        printf("\nEnter int Number & system (2-10), for quit Q:\n");
    }
    return 0;
}
void to_base_n(int n, int sys)
{
    if (n>=sys) to_base_n(n/sys, sys);
    printf("%d", n%sys);
}
