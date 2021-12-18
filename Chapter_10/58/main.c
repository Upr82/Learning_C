#include <stdio.h>
#define STR 3
#define COL 5
int main(void)
{
    int storage[STR][COL];
    int string, column;
    void show_array(int (*ar)[COL], int n);
    void double_array(int ar[][COL], int n);

    for(string=0;string<STR;string++)
    {
        for(column=0;column<COL;column++)
        {
            printf("unit [%d][%d] = ", string, column);
            scanf("%d", &storage[string][column]);
        }
    }

    show_array(storage, STR);
    double_array(storage, STR);
    show_array(storage, STR);

    return 0;
}
void show_array(int (*ar)[COL], int n)
{
    putchar('\n');
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<COL;j++)
            printf("%5d", *(*(ar+i)+j));
        putchar('\n');
    }
}
void double_array(int ar[][COL], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<COL;j++)
            ar[i][j]*=2;
    }
}
