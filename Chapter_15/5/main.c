#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

struct ai_4_20 {
uint8_t onoff :1;
uint8_t status : 2;
uint8_t val :5;
};
union {
struct ai_4_20 SA[2];
unsigned short us;
}un;
int main()
{
    struct ai_4_20 AI_4_20[2];

    int i;
    AI_4_20[0].onoff=0;
    AI_4_20[0].status=3;
    AI_4_20[0].val=31;

    AI_4_20[1].onoff=0;
    AI_4_20[1].status=0;
    AI_4_20[1].val=0;

    un.SA[0] = AI_4_20[0];
    un.SA[1] = AI_4_20[1];

    printf("AI_4_20[0].onoff= %d\n", AI_4_20[0].onoff);
    printf("AI_4_20[0].status= %d\n", AI_4_20[0].status);
    printf("AI_4_20[0].val= %d\n", AI_4_20[0].val);

    printf("AI_4_20[1].onoff= %d\n", AI_4_20[1].onoff);
    printf("AI_4_20[1].status= %d\n", AI_4_20[1].status);
    printf("AI_4_20[1].val= %d\n", AI_4_20[1].val);

    printf("\nUnsigned short = %d\n", un.us);

    for(i=16;i>0;i--)
    {
        if((i%8)==0) putchar(' ');
        printf("%d", un.us&0x800);
        un.us<<=1;
    }

    return 0;
}
