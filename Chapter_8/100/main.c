#include <stdio.h>
#include <stdlib.h>

void print(char ch, int str, int col);

int main()
{
    system("chcp 1251");
    int ch, st, co;
    puts("������� ������ � ����� ����� � ��������.");
    while((ch=getchar())!='\n')
    {
        if(scanf("%d%d", &st, co)!=2)
        {
            puts("������ �����, ������� ��� ����� ������������� �����.");
            break;
        }
        while(getchar()!='\n')
            continue;
        print(ch,st,co);

        puts("������� ������ � ����� ����� � ��������.");
    }


    printf("End!\n");
    return 0;
}
void print(char ch, int str, int col)
{
    int i, j;
    for(i=0;i<str;i++)
    {
        for(j=0;j<col;j++)
            putchar(ch);
        putchar('\n');
    }
}
