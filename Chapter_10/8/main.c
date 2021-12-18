#include <stdio.h>

int data[2]={100,200};
int moredata[2]={300,400};

int *p1 = data;
int *p2 = data;
int *p3 = moredata;

int main(void)
{
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1,     *p2,    *p3);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1++, *++p2,(*p3)++);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1,     *p2,    *p3);



    return 0;
}
