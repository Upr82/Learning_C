#include <stdio.h>
#include <stdlib.h>
#define STR 3
#define COL 4

int main()
{
    const int s=6,c=7;
    void prn2d(int s, int c, char ar[s][c]);
    void add(int s, int c, char ar[s][c]);
    char urn[STR][COL]={
    {'A','B','C','D'},
    {'E','F','G','H'},
    {'I','J','K','L'}};
    char var_urn[s][c];
    add(s,c, var_urn);
    prn2d(STR,COL, urn);
    prn2d(s,c,var_urn);
    prn2d(3,4, (char [3][4]){{'A','B','C','D'},{'E','F','G','H'},
    {'I','J','K','L'}});

    return 0;
}
void prn2d(int s, int c, char ar[s][c])
{
    int i,j;
    for(i=0;i<s;i++)
    {
        for(j=0;j<c;j++)
            printf("%2c", *(*(ar+i)+j));
        putchar('\n');
    }
}
void add(int s, int c, char ar[s][c])
{
    int i, j;
    char ch='a';
    for(i=0;i<s;i++)
    {
        for(j=0;j<c;j++,ch++)
            *(*(ar+i)+j)=ch;
    }


}
