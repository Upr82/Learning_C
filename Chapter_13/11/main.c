#include <stdio.h>
#include <stdlib.h>
#define SIZE 16

int main()
{
    system("chcp 1251");
    FILE *in, *out;
    int ch=0;
    char name1[SIZE];
    char name2[SIZE];
    puts("������� ��� ��������� �����.");
    while(fscanf(stdin,"%s",name1)!=1)
    {
        puts("������! ��������� ������� ��� ��������� �����.");
    }

    if((in=fopen(name1,"a+"))==NULL)
    {
        printf("������ �������� ����� %s\n.",name1);
    }
    while(ch=fgetc(in))
        fputc(ch,stdout);
    puts("������� ��� �����.");
    while((ch=fgetc(stdin))!=EOF)
        {
            fputc(ch,in);
            putchar(ch);
        }

    fclose(in);

    printf("End!\n");
    return 0;
}
