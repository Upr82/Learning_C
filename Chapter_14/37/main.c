#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 81
typedef void(*my_type)(char *) ;

char *s_gets(char *str, int n);
void eatline(void);
char menu(void);
void ToUpper(char *);
void ToLower(char *);
void ToRevers(char *);
void Nul(char *);
void show(void (*pfun)(char*), char *);

int main()
{
    my_type pf;
    char line[SIZE];
    char copyline[SIZE];
    //void (*pf)(char *);
    char choice;

    system("chcp 1251");
    printf("Введите строку (для выхода пустую строку): \n");
    while(s_gets(line, SIZE)!=NULL && line[0]!='\0')
    {
        while((choice=menu())!='n')
            {
                switch (choice)
                {
                case 'u':
                    pf=ToUpper;
                    break;
                case 'l':
                    pf=ToLower;
                    break;
                case 'r':
                    pf=ToRevers;
                    break;
                case 'o':
                    pf=Nul;
                    break;
                }
                strcpy(copyline,line);
                show(pf, copyline);
            }

        printf("Введите строку (для выхода пустую строку): \n");
    }

    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result, *fin;
    result=fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if(fin)
            *fin='\0';
        else eatline();
    }
    return result;
}
void eatline(void)
{
    while(getchar()!='\n')
        continue;
}
char menu(void)
{
    char ch;
    printf("Выберите нужный пункт:\n");
    printf("u - перевести в верхний;  r - обратить;\n");
    printf("l - перевести в нижний;   o - как есть;\n");
    printf("n - новая строка;\n");

    ch=getchar();
    eatline();

    while(strchr("urlon", ch)==NULL)
    {
        printf("Ошибка! Введите правильный символ: \n");
        eatline();
        ch=getchar();
        eatline();
    }
    return ch;
}
void ToUpper(char *str)
{
    while(*str)
    {
        *str=toupper(*str);
        str++;
    }
}
void ToLower(char *str)
{
    while(*str)
    {
        *str=tolower(*str);
        str++;
    }
}
void ToRevers(char *str)
{
    while(*str)
    {
        if(isupper(*str))
            *str=tolower(*str);
        else
            if(islower(*str))
            *str=toupper(*str);
        str++;
    }
}
void show(void (*pfun)(char*), char *str)
{
    pfun(str);
    puts(str);
}
void Nul(char *str)
{

}
