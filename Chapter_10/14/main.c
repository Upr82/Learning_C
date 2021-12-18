#include <stdio.h>
#define SIZE 5

void add_to_arr(int *, int n);
void show_arr(int *, int n);

int main(void)
{
    int arr[SIZE];
    show_arr(arr,SIZE);
    add_to_arr(arr,SIZE);
    show_arr(arr,SIZE);


    return 0;
}

void show_arr(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("[%d] = %d\n", i, *(a+i));
    printf("\n");
}

void add_to_arr(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Input unit #%d: ", i);
        scanf("%d", (a+i));
    }
}
