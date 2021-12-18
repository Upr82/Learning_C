#include <stdio.h>

void func(int pooh);
//int pooh=1, bahh=9;

int main (void)
{
    int pooh=5, bahh=2;
    printf("In function main: pooh = %d, adress pooh = %p\n", pooh, &pooh);
    printf("In function main: bahh = %d, adress bahh = %p\n", bahh, &bahh);

    func(bahh);

    return 0;
}

void func(int pooh)
{
    int bahh=8;
    printf("In function func: pooh = %d, adress pooh = %p\n", pooh, &pooh);
    printf("In function func: bahh = %d, adress bahh = %p\n", bahh, &bahh);
}
