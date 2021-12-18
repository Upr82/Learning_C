#include <stdio.h>
#include <windows.h>

int i = 5;
char ch = '!';
float fl = 13.32;

void pound(int n);

int main()
{
    SetConsoleOutputCP(1251);
    pound(i);
    pound(ch);
    pound(fl);




    return 0;
}

void pound(int n)
{
    while (n-->0) printf("#");
    printf("\n");
}
