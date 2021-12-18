#include <stdio.h>
#include <stdlib.h>

int count_one(int number);

int main()
{
    int x=65535;
    system("chcp 1251");
    printf("in number %d %d one\n", x, count_one(x));

    return 0;
}

int count_one(int number)
{
    int count=0, i=0, size=0;

    size=sizeof(int)*8;
    if(number<0) return -1;
    else if(number==0) return 0;

    for(i=0;i<size;i++, number>>=1)
    {
        if((number&1)==1)
        {
            count++;
            putchar('1');
        }
        else putchar('0');

    }

    return count;
}
