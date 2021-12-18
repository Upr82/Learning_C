#include <stdio.h>
#include <stdlib.h>

const int ROWS = 26, SYMBOLS = 26;
int row;
char sym;

int main()
{
    printf("Hello world!\n");
    for (row=0; row<ROWS; row++)
    {
        for (sym=('A'+row); sym < ('A' + SYMBOLS); sym++)
        {
            printf("%c", sym);
        }
        printf("\n");
    }



    return 0;
}
