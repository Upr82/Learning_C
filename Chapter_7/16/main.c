#include <stdio.h>

char ch;
int a,e,i,j,o,q,u,y;

a = 0;
e = 0;
i = 0;
j = 0;
o = 0;
q = 0;
u = 0;
y = 0;

int main (void)
{
    printf("Enter text (or # for quit):");
    while ((ch=getchar())!='#')
    {
        switch (ch)
        {
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                i++;
                break;
            case 'j':
            case 'J':
                j++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'q':
            case 'Q':
                q++;
                break;
            case 'u':
            case 'U':
                u++;
                break;
            case 'y':
            case 'Y':
                y++;
                break;

        }

    }
printf("a=%d, e=%d, i=%d, j=%d, o=%d, q=%d, u=%d, y=%d.\n", a, e, i, j, o, q, u, y);



    return 0;
}
