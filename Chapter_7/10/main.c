#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int one_cans_S=12;
int cans;
int S;


int main()
{
    SetConsoleOutputCP(1251);
    printf("¬ведите требуемую площадь окрашивани€: ");
    while (scanf("%d", &S)==1)
    {
        cans =S /one_cans_S;
        cans += (S%one_cans_S) ? 1:0;
        printf("ƒл€ этой площади требуетс€ %d %s.\n", cans, (cans==1) ? "банка" : "банок");
         printf("¬ведите требуемую площадь окрашивани€: ");

    }



    return 0;
}
