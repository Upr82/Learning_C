#include <stdio.h>
#include <windows.h>

char ch;

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while ((ch=getchar())!=EOF)
        putchar(ch);

    return 0;
}
