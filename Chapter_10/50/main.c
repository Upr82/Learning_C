#include <stdio.h>
int main(void)
{
    const int arr[4][3]={{35,525,562},{3,8675,385},{246,7846,746},{378,9667,8631} };
    int max_unit(const int (*ar)[3], int n);

    printf("Max unit of array = %d\n", max_unit(arr,4));

    return 0;
}
int max_unit(const int (*ar)[3], int n)
{
    int m=0,c,s;
    for(s=0;s<n;s++)
    {
        for(c=0;c<3;c++)
            if(m<*(*(ar+s)+c))
            m=*(*(ar+s)+c);
    }


    return m;
}
