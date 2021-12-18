#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double mass1 [8], mass2 [8], sum;
int i;


int main(void)
{
    SetConsoleOutputCP(1251);
    printf("¬ведите в массив є1 восемь значений типа double:");
    for (i=0, sum=0.0; i<8; i++)
    {
        scanf("%lf", &mass1[i]);
        sum += mass1[i];
        mass2[i]=sum;
        printf("mass2[%d] = %4g\n", i, mass2[i]);
    }



    return 0;
}
