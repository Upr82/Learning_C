#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    system("chcp 1251");
    double a,b;
    if (((a=atof(argv[1]))!=0.0) && ((b=atof(argv[2]))!=0.0))
        printf("����� %g � %g = %g\n", a, b, a+b);
    else printf("����� �����������.\n");

    getchar();




    return 0;
}
