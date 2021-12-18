#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define LENGHT 512
#define NAME 25


//char *s_gets(char *str, int n, FILE *fp);

int main()
{
    FILE *f1, *f2;
    int i=0,ch=0;
    char name1[NAME];
    char name2[NAME];
    char arr1[LENGHT];
    char arr2[LENGHT];
    char *str1,*str2;
    _Bool flag_eof1=false;
    _Bool flag_eof2=false;


    system("chcp 1251");

    puts("Введите имена файлов №1 и №2:");
    while(fscanf(stdin,"%s %s",name1, name2)!=2 || name1[0]=='\0' || name2[0]=='\0')
    {
        puts("Ошибка! Введите имена файлов №1 и №2:");
    }

    if((f1=fopen(name1,"r"))==NULL)
    {
        fprintf(stderr,"Error open file 1.");
        exit(EXIT_FAILURE);
    }
    if((f2=fopen(name2,"r"))==NULL)
    {
        fprintf(stderr,"Error open file 2.");
        exit(EXIT_FAILURE);
    }

    while(flag_eof1==false || flag_eof2==false)
    {
        while((ch=getc(f1))!=EOF && ch!='\n')
        {
            putc(ch,stdout);
        }
        if(feof(f1))
            flag_eof1=true;
        putchar('\n');
        while((ch=getc(f2))!=EOF && ch!='\n')
        {
            putc(ch,stdout);
        }
        if(feof(f2))
            flag_eof2=true;
        putchar('\n');
    }

    if(fclose(f1))
    {
        fprintf(stderr,"Error close file 1.");
        exit(EXIT_FAILURE);
    }
    if(fclose(f2))
    {
        fprintf(stderr,"Error close file 1.");
        exit(EXIT_FAILURE);
    }
    printf("\nEnd!\n");
    return 0;
}

/*char *s_gets(char *str, int n, FILE *fp)
{
    char *result;
    int i=0;

    result=fgets(str,n,fp);
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
*/
