#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int s,c;

void arr_ad(int str, int col, int ar[str][col]);
void arr_pr(int str, int col, int ar[str][col]);

int main()
{
    SetConsoleOutputCP(1251);



    //void arr_old_pr(int arr[][c], int n);

    printf("Программа формирует массив с заданными пользователем размерами.\n");
    printf("Введите количество строк: ");
    scanf("%d", &s);
    printf("Введите количество cтолбцов: ");
    scanf("%d", &c);

    int urn[s][c];

    arr_ad(s,c,urn);
    arr_pr(s,c,urn);

    return 0;
}
void arr_ad(int str, int col, int ar[str][col])
{
    int i,j,a=1;
    for(i=0;i<str;i++)
    {
        for(j=0;j<col;j++,a++)
            {
                ar[i][j]=a;
                //printf("mas[%d][%d] = %3d\n", i,j, ar[i][j]);
            }
    }
}
void arr_pr(int str, int col, int ar[str][col])
{
    int i,j;
    for(i=0;i<str;i++)
    {
        for(j=0;j<col;j++)
            printf("%3d", ar[i][j]);
        printf("\n");
    }
}

