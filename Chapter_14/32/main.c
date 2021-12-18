#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct mod
{
    uint8_t b1;
    uint8_t b2;
};

union u1
{
    struct mod s1;
    uint16_t w1;
} test;

int main()
{

    system("chcp 1251");

    //short i=0x255;

    test.s1.b1=0xfe;
    test.s1.b2=0xff;

    printf("%d\n", test.s1.b1);
    printf("%d\n", test.s1.b2);
    printf("%d\n", test.w1);

    printf("Hello world!\n");
    return 0;
}
