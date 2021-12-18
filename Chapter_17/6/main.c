#include <stdio.h>
#include <stdlib.h>
#define STR 4
#define COL 2



void show_arr(int temp[][COL], int x);
void add_arr(int temp[][COL], int x);
int main()
{
    int zippo[STR][COL];
    show_arr(zippo, STR);
    add_arr(zippo, STR);
    putchar('\n');
    show_arr(zippo, STR);
    printf("Hello world!\n");
    return 0;
}
void show_arr(int temp[][COL], int x)
{
    int a=0, b=0;
    for(a=0;a<x;a++)
    {
        for(b=0;b<COL;b++)
            printf("%8d", temp[a][b]);
        putchar('\n');
    }
}
void add_arr(int temp[][COL], int x)
{
    int a,b, c=0;
    for(a=0;a<x;a++)
    {
        for(b=0;b<COL;b++, c++)
            temp[a][b]=c;
    }
}
