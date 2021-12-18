#include <stdio.h>

void alter(int * pa, int * pb);

int main(void)
{
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    alter(&a, &b);
    printf("summ = %d, razn = %d", a, b);

    return 0;
}
void alter(int * pa, int * pb)
{
    int temp;
    temp= *pa + *pb;
    *pb = *pa - *pb;
    *pa = temp;


}
