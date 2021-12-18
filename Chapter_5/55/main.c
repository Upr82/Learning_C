#include <stdio.h>
#include <stdlib.h>

int massiv [8], i;



int main()
{
    printf("Enter eight INT number: ");
    for (i=0;i<8;i++) scanf("%d", &massiv[i]);
    printf("\n");
    for (i=7;i>=0;i--) printf("%d", massiv[i]);




    return 0;
}
