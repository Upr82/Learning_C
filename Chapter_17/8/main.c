#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void add_arr(int temp[], int n, int user_num);
void prn_arr(const int temp[], int n);
void mod_arr(int *user_num, int bite_num, int n);
int main()
{
    int num=0, b, SIZE;
    SIZE=sizeof(int)*8;
    int arr[SIZE];
    memset(arr,0,SIZE);
    printf("Input integer number, \n");
    while(scanf("%d", &num)==1)
    {
        getchar();
        add_arr(arr, SIZE, num);
        prn_arr(arr, SIZE);
        printf("input number bite(1-%d) for it on: ", SIZE);
        if(scanf("%d", &b)==1 && b>0 && b<=SIZE)
        {
            getchar();
            mod_arr(&num, b, SIZE);
            add_arr(arr, SIZE, num);
            prn_arr(arr, SIZE);
        } else
        printf("incorrect number bit.\n");
        printf("Input integer number, \n");
    }
    return 0;
}
void add_arr(int temp[], int n, int user_num)
{
    int i, control=0;
    for(i=n-1;i>=0;i--,user_num>>=1)
        {
            temp[i]=user_num&0x01;
            if(temp[i])
                control+=(int)pow(2.0, (double)(n-i-1));
        }
        printf("control number = %d\n", control);
}
void prn_arr(const int temp[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d", temp[i]);
    putchar('\n');
}
void mod_arr(int *user_num, int bite_num, int n)
{
    int i, mask=0;
    for(i=0;i<n-1;i++,mask<<=1)
    {
        if((n-i)==bite_num)
            mask|=1;
        else
            mask|=0;
    }
    //mask=~mask;

    *user_num|=mask;
}
