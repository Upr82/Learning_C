#include <stdio.h>
#include <ctype.h>

char ch;
int zam=0;

int main(void)
{
    while((ch=getchar())!='#')
    {
        if (ch=='.')
        {
            ch='!';
            zam++;
        } else if (ch=='!')
        {
            putchar('!');
            zam++;
        }
        putchar(ch);
    }
    printf("\n%d zamen.\n",zam);



    return 0;
}
