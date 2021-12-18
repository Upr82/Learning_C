#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void show_arr(const int [],int);
void sort_arr(int[], int);

int main()
{
    system("chcp 1251");
    int i;
    int arr[SIZE];
    //int srr[SIZE];
    srand((unsigned int)time(0));

    for(i=0;i<SIZE;i++)
        arr[i]=rand()%10+1;

    show_arr(arr,SIZE);
    sort_arr(arr,SIZE);
    show_arr(arr,SIZE);

    printf("\nEnd!\n");


    return 0;
}

void show_arr(const int mass[], int n)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%4d",mass[i]);
        if((i+1)%10==0)
            putchar('\n');
    }
}
void sort_arr(int mass[], int n)
{
    int i,j,pr;
    for(j=0;j<n-1;j++)
    {
        for(i=j+1;i<n;i++)
            if(mass[j]<mass[i])
            {
                pr=mass[i];
                mass[i]=mass[j];
                mass[j]=pr;
            }
    }


}
