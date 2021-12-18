#include <stdio.h>

int main(void)
{
    int urn[4]={100,200,300,400};
    int *p1 = urn;
    int *p2 = &urn[2];
    int *p3;

    int *p4;
    int a;
    p4=&a;
    printf("p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);
    printf("p2 = %p, *p2 = %d. &p2 = %p\n", p2, *p2, &p2);
    p3 = p1+3;
    printf("p3 = p1+3 = %p, *p3 = %d, &p3 = %p\n", p3, *p3, &p3);
    p1++;
    printf("p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);
    p2--;
    printf("p2 = %p, *p2 = %d. &p2 = %p\n", p2, *p2, &p2);
    p1--;
    p2++;
    printf("p3 - p1 = %d\n", p3-p1);
    printf("p4 = %p, *p4 = %d, &p4 = %p\n", p4, *p4, &p4);
    *p4 = 5;
    printf("p4 = %p, *p4 = %d, &p4 = %p\n", p4, *p4, &p4);



     return 0;
}
