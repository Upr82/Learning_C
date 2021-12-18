#include <stdio.h>


int main(void)
{
    int zippo[4][2]={   {1,2},
                        {3,4},
                        {5,6},
                        {7,8}};
    printf("adr zippo    = %p, zippo+1        = %p\n", zippo, zippo+1);
    printf("adr zippo+2  = %p, zippo+3        = %p\n\n", zippo+2, zippo+3);

    printf("adr zippp[0] = %p, adr zippo[0]+1 = %p\n", zippo[0], zippo[0]+1);
    printf("adr zippp[1] = %p, adr zippo[1]+1 = %p\n", zippo[1], zippo[1]+1);
    printf("adr zippp[2] = %p, adr zippo[2]+1 = %p\n", zippo[2], zippo[2]+1);
    printf("adr zippp[3] = %p, adr zippo[3]+1 = %p\n", zippo[3], zippo[3]+1);
    //printf("*zippo = %d, *")





    return 0;
}
