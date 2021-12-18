#include <stdio.h>
#define SIZE 10

void show(const int *ar, int n);
void add(int *ar, int n, int a);

int main(void)
{
    int arr[SIZE] = {9,8,7,6,5,4,3,2,1,0};
    show(arr,SIZE);
    add(arr,SIZE,10);
    show(arr,SIZE);

    return 0;
}
void show(const int *ar, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("[%d] = %2d\n", i, ar[i]);
        printf("\n");
}

void add(int *ar, int n, int a)
{
    int i;
    for(i=0;i<n;i++)
    {
        *(ar++) +=a;
    }
}
