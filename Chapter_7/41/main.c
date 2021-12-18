#include <stdio.h>

char cur, prev='.';
int i=0;

int main(void)
{
    while((cur=getchar())!='#')
    {
        if (prev=='e' && cur=='i')
            i++;
        prev=cur;
    }
    printf("\nei = %d.", i);



    return 0;
}
