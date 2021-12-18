#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned char ch;


int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!!!\n");
    for (ch=0; ch<=255; ch++)
    {
        printf("¹%d =  %c\n", ch, ch);
        if (ch==255) break;
    }
    return 0;
}
