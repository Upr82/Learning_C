#include <stdio.h>
#include <windows.h>

int num;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (num=1; num<=11;num++)
    {
        if (num%3==0)
            putchar('$');
        else
            putchar('*');
        putchar('#');
        putchar('%');
    }
    putchar('\n');

    return 0;
}
