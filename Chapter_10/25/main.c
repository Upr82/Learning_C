#include <stdio.h>
int main(void)
{
    int urn[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int sum(int arr[], int n);
    int total=0, i;
    for(i=0;i<4;i++)
        total+=sum(urn[i], 3);
    printf("Sum units of array = %d\n", total);


    return 0;
}
int sum(int arr[], int n)
{
    int all=0, i;
    for(i=0;i<n;i++)
        all+=arr[i];

    return all;
}
