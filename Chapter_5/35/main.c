#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char ch;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");
    for(ch=-128; ch<=127; ch++)
    {
        printf("Символ №%4d - %c\n", ch, ch);
        if (ch==127) break;
    }
    return 0;
}
