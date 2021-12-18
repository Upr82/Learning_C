#include <stdio.h>
#define STR 5
#define COL 4
int main(void)
{
    int source[STR][COL]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}
    };
    int target[STR][COL];
    void copy_arr(int (*t)[COL], int (*s)[COL], int n);

    copy_arr(target, source, STR);

    return 0;
}
void copy_arr(int (*t)[COL], int (*s)[COL], int n)
{
    int str,col;
    for(str=0;str<n;str++)
    {
        for(col=0;col<COL;col++)
           *(*(t+str)+col)=*(*(s+str)+col);
    }
    for(str=0;str<n;str++)
    {
        for(col=0;col<COL;col++)
            printf("%-3d",*(*(t+str)+col));
        putchar('\n');
    }

}
