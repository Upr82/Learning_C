#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char ch;
const char PROBEL = ' ';

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Данная программа меняет введённые символы (кроме пробела).\n");
    printf("Введите текст: ");
    while((ch=getchar())!='\n')
    {
        if (ch!=PROBEL) putchar(ch+1);
            else putchar(ch);
    }
    putchar(ch);





    return 0;
}
