#include <stdio.h>

char ch;
int zam=0;

int main(void)
{
    while((ch=getchar())!='#')
    {
        switch (ch)
        {
            case '!':
                    putchar('!');
                    zam++;
                    break;
            case '.':
                    ch='!';
                    zam++;
                    break;
        }
        putchar(ch);


    }
    printf("\n%d zam.", zam);


    return 0;
}
