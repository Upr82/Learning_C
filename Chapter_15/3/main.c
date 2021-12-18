#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#define SIZE 2

struct ai{
uint8_t vkl :1;
uint8_t stat :2;
uint8_t val :4;
};

union {
struct ai tempu[SIZE];
short shortu;
} my_union;
int main()
{
    int i,j;
    short x;
    struct ai AI4_20[SIZE]={
    {1,0,8},
    {1,3,15},
    };
    system("chcp 1251");

    my_union.tempu[0]=AI4_20[0];
    my_union.tempu[1]=AI4_20[1];

    for(i=0;i<SIZE;i++)
    {
        printf("\nВход Ai 4-20мА №%d:\n",i+1);
        printf("Включенность = %d\n", AI4_20[i].vkl);
        printf("Статус = %d\n", AI4_20[i].stat);
        printf("Значение = %d\n", AI4_20[i].val);
    }

    for(j=(CHAR_BIT*sizeof(short))-1, x=my_union.shortu;j>=0;j--,x>>=1)
        {

            printf("%d", x&0x1);
            if((j%8)==0)
                putchar(' ');
        }

    printf("\nHello world!\n");
    return 0;
}
