#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
#define MAXSHPAK 2

struct names{
char first[SIZE];
char second[SIZE];
} fi;

struct boy{
struct names fi;
int letter;
};


int main()
{
    struct boy shpak[MAXSHPAK] = {
        {{"Anton","Shpak"}},
        {{"Egor", "Shpak"}}

        };

    int i;
    struct boy *him;

    him=&shpak[0];
    printf("Adress = %p, %p\n", him, him+1);

    him=shpak;
    printf("Adress = %p, %p\n", him, him+1);



    for(i=0;i<MAXSHPAK;i++)
    {
        printf("# %d:\n", i+1);
        shpak[i].letter = strlen(shpak[i].fi.first)+strlen(shpak[i].fi.second);
        printf("%s %s %d letters\n", shpak[i].fi.first, shpak[i].fi.second,
               shpak[i].letter);
    }
    putchar('\n');

    for(i=0;i<MAXSHPAK;i++)
    {
        printf("# %d:\n", i+1);
        printf("%s %s %d letters\n", him->fi.first, him->fi.second, him->letter);
        him++;
    }


    //printf("In %s %s = %d\n", sag.fi.first, sag.fi.second, sag.letter);

    printf("\nHello world!\n");
    return 0;
}
