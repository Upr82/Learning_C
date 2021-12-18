#include <stdio.h>
#include <windows.h>

char ch;

int main(void)
{

    while ((ch=getchar())!='#')
    {
         putchar(ch);
    }



    return 0;
}
