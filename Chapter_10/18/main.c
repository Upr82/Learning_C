#include <stdio.h>
#include <windows.h>
#define YEARS 5
#define MONTHS 12


int main (void)
{
    SetConsoleOutputCP(1251);
    const float rain [YEARS][MONTHS]={
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}};
    float sum_year, medium_year, medium_month=0.0, sum=0.0;
    int i,j;
    for (i=0; i<YEARS; i++)
    {
        for(j=0, sum_year=0.0, medium_year=0.0;j<MONTHS;j++)
        {
            sum_year+=rain[i][j];
        }

        printf("Year %d: sum = %g;\n", i+1, sum_year);
    }
    printf("ßíâ. Ôåâ. Ìàð. Àïð. Ìàé  Èþíü Èþëü Àâã. Ñåí. Îêò. Íîÿ. Äåê.\n");
    for(i=0, medium_month=0.0;i<MONTHS;i++)
    {
        for(j=0, sum=0.0;j<YEARS;j++)
            sum += rain[j][i];
        medium_month=sum/YEARS;
        printf("%4.1f ", medium_month);
    }





    return 0;
}
