#include <stdio.h>

const int a = 3;
int main(void)
{
    int urn[2]={1,2,3};
    int x = 20;
    int *p1 = &x;

    const int y = 23;
    const int * p2 = &y;

    const int **pp2;

    printf("x = %d, y = %d\n", x, y);

    printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);

   /* p1=p2;

    printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);

    *p1+=10;

    printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);
    printf("x = %d, y = %d\n", x, y);*/

    p2=p1;

    printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);
    printf("x = %d, y = %d\n", x, y);

    pp2=&p1;

    printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&pp2 = %p, pp2 = %p, **pp2 = %d\n", &pp2, pp2, **pp2);




    return 0;
}
