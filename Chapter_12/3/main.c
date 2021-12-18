#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    void mul(void);
    int n=111;

    for(int n=11;n<=13;n++)
    {
        mul();
    }

    printf("Hello world!\n");
    return 0;
}
void mul(void)
{
    int num =1;
    static int loc;
    for(int n=1;n<=3;n++)
        {
            printf("num = %d ",num++);
            printf("loc = %d ",loc++);
        }
    putchar('\n');
}
