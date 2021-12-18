#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define YEARS 5
#define MONTHS 12

int main()
{
    SetConsoleOutputCP(1251);
    const float rain[YEARS][MONTHS]={
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}};

    const float (*p)[MONTHS];
    p=&rain[0];
    float total=0, subtot;
    int y,m;
    for(y=0;y<YEARS;y++)
    {
        for(m=0,subtot=0.0;m<MONTHS;m++)
        {
            subtot+=*(*(p+y)+m);
        }
        printf("201%d = %g\n", y, subtot);
        total+=subtot;
    }
    printf("All = %g, medium = %g\n", total, total/YEARS);

    printf("%5s%5s%5s%5s%5s%5s%5s%5s%5s%5s%5s%5s\n",
           "ßíâ.", "Ôåâ.", "Ìàðò", "Àïð.", "Ìàé", "Èþíü", "Èþëü", "Àâã.", "Ñåí.", "Îêò.", "Íîÿ.", "Äåê.");

    for(m=0;m<MONTHS;m++)
    {
        for(y=0, subtot=0.0;y<YEARS;y++)
            subtot+=*(*(p+y)+m);
        printf("%5.1f", subtot/YEARS);
    }

    return 0;
}
