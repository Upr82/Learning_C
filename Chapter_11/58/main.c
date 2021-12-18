#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double d,answ;
    int i,step;

    d = atof(argv[1]);
    step = atoi(argv[2]);

    for(i=1,answ=1;i<=step;i++)
        answ*=d;

    printf("\n%g ^ %d = %g\n", d, step, answ);
    return 0;
}
