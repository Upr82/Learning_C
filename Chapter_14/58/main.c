#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80

char *s_gets(char *str, int n);
char menu(void);
void eat(void);
void ToUpper(char *);
void ToLower(char *);
void Revers(char *);
void Curr(char *);
void show(void(*pf)(char *), char *);

int main()
{
    system("chcp 1251");
    char source[SIZE];
    char target[SIZE];
    char ch;

    printf("������� ������ ��� ������ (��� ������ ������ ������): \n");
    while(s_gets(source, SIZE)!=NULL && source[0]!='\0')
    {
        while((ch=menu())!='e')
        {
            strcpy(target, source);
            switch (ch)
            {
            case 'u':
                show(ToUpper, target);
                break;
            case 'l':
                show(ToLower, target);
                break;
            case 'r':
                show(Revers, target);
                break;
            case 'c':
                show(Curr, target);
                break;
            }
        }
        printf("������� ������ ��� ������ (��� ������ ������ ������): \n");
    }

    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result=NULL, *fin=NULL;
    result=fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if(fin)
            *fin='\0';
        else eat();
    }
    return result;
}
char menu(void)
{
    char ch;
    printf("�������� ������ �����: \n");
    printf("u - ��� ������� � ������� �������;\n");
    printf("l - ��� ������� � ������ �������;\n");
    printf("r - �������� ��������;\n");
    printf("c - ������� ������ ��� ����;\n");
    printf("e - ���������.\n");
    while(scanf("%c", &ch)!=1 || strchr("ulrce", ch)==NULL)///���������� ��� ����� ������� � ������
    {
        printf("������! ������� u ��� l ��� r ��� c ��� e.\n");
        eat();
    }
    eat();
    return ch;
}
void eat(void)
{
    while(getchar()!='\n')
            continue;
}
void ToUpper(char *str)
{
    while(*str)
    {
        if(islower(*str))
            *str=toupper(*str);
        str++;
    }
}
void ToLower(char *str)
{
    while(*str)
    {
        if(isupper(*str))
            *str=tolower(*str);
        str++;
    }
}
void Revers(char *str)
{
    while(*str)
    {
        if(islower(*str))
            *str=toupper(*str);
        else
            *str=tolower(*str);
        str++;
    }
}
void Curr(char *str)
{

}
void show(void (*pf)(char *), char *str)
{
    pf(str);
    puts(str);
}
