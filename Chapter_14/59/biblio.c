#include "biblio.h"

void eat(void)
{
    while(getchar()!='\n')
            continue;
}
float sum(float a, float b)
{
    return a+b;
}
void show(float(*pf)(float, float), float x, float y)
{
    printf("%g + %g = %g\n", x, y, pf(x,y));
}
