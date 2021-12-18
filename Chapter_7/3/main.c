#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

char ch;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Enter string: \n");
    while((ch=getchar())!='\n')
    {
        if (islower(ch))
            putchar(toupper(ch));
        else putchar(tolower(ch));
    }
    putchar(ch);




    return 0;
}
