#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char ch;
const char PROBEL = ' ';

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������ ��������� ������ �������� ������� (����� �������).\n");
    printf("������� �����: ");
    while((ch=getchar())!='\n')
    {
        if (ch!=PROBEL) putchar(ch+1);
            else putchar(ch);
    }
    putchar(ch);





    return 0;
}
