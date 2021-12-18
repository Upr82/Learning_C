#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int arr[SIZE]={9,8,7,6,5,4,3,2,1,0};
    void prnt_arr(const int a[], int n);
    int sum(const int a[], int n);

    system("chcp 1251");

    prnt_arr(arr,SIZE);

    printf("Сумма элементов массива = %d\n",sum(arr,SIZE));

    printf("Hello world!\n");
    return 0;
}
void prnt_arr(const int a[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
        printf("[%2d] = %d\n", i, a[i]);
}
int sum(const int a[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return s;
}
