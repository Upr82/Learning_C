#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct rect {
double x;
double y;
};

double rect_area(struct rect *r);

int main()
{
    struct rect *ps;
    ps=&(struct rect){10.0,20.0};

    printf("Area = %g.\n", rect_area(ps));

    return 0;
}

double rect_area(struct rect *r)
{
    return (r->x*r->y);
}

