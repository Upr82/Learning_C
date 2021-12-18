#include <stdio.h>
#include <string.h>
#include <windows.h>
#define WORDS 4
#define CHARACTER 20
int main(void)
{
    SetConsoleOutputCP(1251);
    char qwords[WORDS][CHARACTER]={"астрол€би€","астрономи€","астрологи€","астра"};
    int count,x,y,a, mini=0, maxi=0;

    for(count=0;count<(WORDS-1);count++)
        (strlen(qwords[count])<strlen(qwords[count+1]))? (mini= strlen(qwords[count])):(mini= strlen(qwords[count+1]));
        /*if (strlen(qwords[count]) < strlen(qwords[count+1]))
            mini = strlen(qwords[count]);
        else mini= strlen(qwords[count+1]);*/

    for(count=0;count<(WORDS-1);count++)
        (strlen(qwords[count])>strlen(qwords[count+1]))? (maxi= strlen(qwords[count])):(maxi= strlen(qwords[count+1]));
        /*if (strlen(qwords[count])>strlen(qwords[count+1]))
            maxi= strlen(qwords[count]);
        else maxi= strlen(qwords[count+1]);*/

    printf("¬ведите число букв (слова от %d до %d букв), по которым проводить сравнение: ", mini, maxi);

    while(scanf("%d", &y)==1)
    {
        while(getchar()!='\n')
            continue;
        for(x=0;x<WORDS-1;x++)
        {
            for(a=x+1;a<WORDS;a++)
            {
                if(strncmp(qwords[x], qwords[a], y)==0)
                {
                    printf("—лова %s и %s  до %d буквы совпадают.\n", qwords[x], qwords[a], y);
                }
                else printf ("ќшибка! —лова %s и %s  до %d буквы не совпадают.\n", qwords[x], qwords[a], y);
            }
        putchar('\n');
        }
        printf("¬ведите число букв (слова от %d до %d букв), по которым проводить сравнение: ", mini, maxi);
    }

    return 0;
}
