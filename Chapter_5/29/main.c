#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

short ch;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");
    for(ch = -128 ;ch < 127; ch++)
    {
        printf("ASCII значение символа %c равно %d;\n", ch, ch);
    }

    return 0;
}
