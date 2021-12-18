#include <stdio.h>
#include <windows.h>

char ch;
int i=0;


int main (void)
{
    while((ch=getchar())!='#')
    {
        if (((i++)%8)==0) printf("\n");
        printf("%c=%d ", ch, ch);
         }



    return 0;
}
