#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 512
#define STLEN 31

void add_text(FILE *targ, FILE *sour);
char * s_gets(char *str, int n);
int main()
{
    char target_name[STLEN];
    char source_name[STLEN];
    FILE *target, *source;
    int ch;

    system("chcp 1251");
    puts("Введите имя файла, в который копируем данные:");
    s_gets(target_name,STLEN);
    if((target=fopen(target_name,"a+"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия целевого файла %s.\n",target_name);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(target,NULL,_IOFBF,BUFSIZE))
    {
        fprintf(stderr,"Ошибка создания буфера для %s.\n",target_name);
        exit(EXIT_FAILURE);
    }
    fprintf(stdout,"Введите имя файла источника, пустую строку для выхода:\n");
    while(s_gets(source_name,STLEN)!=0 && source_name[0]!='\0')
    {
        if(strcmp(target_name,source_name)==0)
        {
            fprintf(stderr,"Файл нельзя копировать в себя.\n");
        } else
        {
            if((source=fopen(source_name,"r"))==NULL)
            {
                fprintf(stderr,"Ошибка открытия файла источника %s.\n", source_name);
            }
            else
            {
                if(setvbuf(source,NULL,_IOFBF,BUFSIZE))
                {
                    fprintf(stderr,"Ошибка создания буфера для исходного файла %s.\n",source_name);
                } else
                {
                    add_text(target,source);
                    if(fclose(source))
                    {
                        fprintf(stderr,"Ошибка закрытия файла источника %s.\n",source_name);
                    }
                    fprintf(stderr,"\nВот что получилось:\n");
                    rewind(target);
                    while((ch=getc(target))!=EOF)
                        putc(ch,stdout);
                }
            }
        }
        fprintf(stdout,"\nВведите имя файла источника или пустую строку для выхода:\n");
    }

    if(fclose(target))
    {
        fprintf(stderr, "Ошибка закрытия файла %s.\n", target_name);
        exit(EXIT_FAILURE);
    }

    printf("End\n");
    return 0;
}
void add_text(FILE *targ, FILE *sour)
{
    static char temp[BUFSIZE];
    size_t bytes;
    while((bytes=fread(temp, sizeof(char),BUFSIZE,sour))>0)
        fwrite(temp,sizeof(char),bytes,targ);
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str,n,stdin);
    if(result)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
