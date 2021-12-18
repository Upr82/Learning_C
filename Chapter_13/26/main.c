#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

char *s_gets(char *str, int n);

int main()
{
    FILE *target, *source;
    char target_name[SIZE];
    char source_name[SIZE];
    int ch;

    system("chcp 1251");

    puts("¬ведите им€ целевого файла.");
    s_gets(target_name,SIZE);
    if((target=fopen(target_name,"w+"))==NULL)
    {
        puts("Error open target file.");
        exit(EXIT_FAILURE);
    }
    puts("¬ведите им€ исходного файла.");
    while((s_gets(source_name, SIZE))==NULL || strcmp(source_name,target_name)==0)
    {
        puts("Error, identical file names.");
    }
    if((source=fopen(source_name,"r"))==NULL)
    {
        puts("Error open source file.");
    }
    while((ch=getc(source))!=EOF)
    {
        if(islower(ch))
            ch=toupper(ch);
        putc(ch,target);
    }


    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str,int n)
{
    char *result;
    int i=0;
    result=fgets(str, SIZE, stdin);
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
