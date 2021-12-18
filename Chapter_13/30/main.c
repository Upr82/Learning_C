#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20
#define REZ ".bak"


char *s_gets(char *str, int n);

int main()
{
    FILE *target, *source;
    char target_name[SIZE];
    char source_name[SIZE];
    int ch=0,count=0;

    system("chcp 1251");
    fprintf(stdout,"Введите имя исходного файла: ");
    s_gets(source_name, SIZE);
    if((source=fopen(source_name,"r"))==NULL)
    {
        puts("Ошибка открытия исходного файла.");
        exit(EXIT_FAILURE);
    }
    strncpy(target_name,source_name,SIZE);
    strcpy(strchr(target_name,'.'),REZ);

    if((target=fopen(target_name,"w"))==NULL)
    {
        puts("Ошибка открытия целевого файла.");
        exit(EXIT_FAILURE);
    }

    while((ch=getc(source))!=EOF)
    {
        if(count%3==0)
        {
            putc(ch,target);
            putchar(ch);
        }
        count++;
    }

    if(fclose(source))
    {
        puts("Ошибка закрытия исходного файла.");
        exit(EXIT_FAILURE);
    }
    if(fclose(target))
    {
        puts("Ошибка закрытия целевого файла.");
        exit(EXIT_FAILURE);
    }
    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;

    result=fgets(str, n, stdin);
    if(result)
    {
        while(str[i]!='\n' && str[i]!='\0')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
