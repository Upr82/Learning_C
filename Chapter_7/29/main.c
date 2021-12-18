#include <stdio.h>

int a=1, b=1, pre_a, b_post;

int main (void)
{
    pre_a=++a;
    b_post=b++;
    printf("a pre_a b b_post\n");
    printf("%d %5d %d %6d", a, pre_a, b, b_post);//comment



    return 0;
}
