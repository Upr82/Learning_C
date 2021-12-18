#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define GAMERS 10

//unsigned GAMERS = 10;
const float PAR = 72.0;
int i, sum=0;
int table [GAMERS];
float middle;

int main()
{
    SetConsoleOutputCP(1251);
    printf("¬ведите результаты %d игроков:\n", GAMERS);
    for (i=0; i<GAMERS; i++)
    {
        //printf("¬ведите результат игрока є%2d: ", i+1);
        scanf("%d", &table[i]);
    }

    printf("\n");

    for (i=0; i<GAMERS; i++)
    {
        printf("»грок є%2d набрал %3d очка(ов);\n", i+1, table[i]);
    }

    printf("\n");

    for (i=0; i<GAMERS; i++)
    {
        sum += table[i];
    }
    middle = (float)sum/GAMERS;
    printf("—умма очков = %d, средний результат = %.1f очка(ов), гандикап = %.0f.", sum, middle, middle-PAR);



    return 0;
}
