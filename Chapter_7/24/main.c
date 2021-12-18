#include <stdio.h>
#include <windows.h>

int a=1,b=2,c,d;

int main()
{
    printf("Input C: ");
    scanf("%d", &c);
    d=(c>=2)?b:a;
    printf("d = %d.\n", d);





    return 0;
}
