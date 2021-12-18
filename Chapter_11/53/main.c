#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int arr[SIZE]={5,4,3,2,1};
int main()
{

    void soort(int mas[], int n);

    for(int i=0;i<SIZE;i++)
        printf("[%d] = %d\n", i, arr[i]);
    putchar('\n');

    soort(arr, SIZE);
    return 0;
}
void soort(int mas[], int n)
{
    int target[n];
    int a,b;

    for(a=0;a<(n-2);a++)
    {
        for(b=a+1;b<(n-1);b++)
        {
            if(mas[a]<=mas[b])
            {
                target[a]=mas[b];
                target[a+1]=mas[b+1];
            }
            else
            {
                target[b]=mas[b+1];
                //target[b+1]=mas[b];
            }
        }
    }


    for(int c=0;c<n;c++)
        printf("[%d] = %d\n", c, target[c]);
}
