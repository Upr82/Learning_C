#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define STLEN 81

void add_text(FILE *source, FILE *target);
char *s_gets(char *str, int n);

int main(void)
{
    FILE *src, *trg;
    char source_name[STLEN];
    char target_name[STLEN];
    int count=0;
    int ch;


    system("chcp 1251");

    puts("Введите имя целевого файла.");
    s_gets(target_name,STLEN);
    if((trg=fopen(target_name,"a+"))==NULL)
    {
        puts("Ошибка открытия целевого файла.");
        exit(EXIT_FAILURE);
    }

    if(setvbuf(trg,NULL,_IOFBF,BUFSIZE)!=0)
    {
        puts("Ошибка открытия буфера для целевого файла.");
        exit(EXIT_FAILURE);
    }

    puts("Введите имя исходного файла или пустую строку для выхода.");
    while(s_gets(source_name,STLEN)!=NULL && source_name[0]!='\0')
    {
        if(strcmp(target_name,source_name)==0)
        {
            puts("Нельзя копировать файл сам в себя.");
        } else
        {
            if((src=fopen(source_name,"r"))==NULL)
            {
                fprintf(stderr,"Не могу открыть исходный файл %s.\n",source_name);
            } else
            {
                if(setvbuf(src,NULL,_IOFBF,BUFSIZE)!=0)
                {
                    fprintf(stderr,"Не могу создать буфер для исходного файла.\n");
                } else
                {
                    add_text(src,trg);
                    if(fclose(src)!=0)
                        fprintf(stderr,"Не могу закрыть исходный файл %s.\n",source_name);
                    count++;
                }
            }
        }
        puts("Введите имя следующего исходного файла или пустую строку для выхода.");
    }

    rewind(trg);
    puts("Вот что получилось:");
    while((ch=getc(trg))!=EOF)
        putc(ch,stdout);

    if(feof(trg)!=0)
        fprintf(stderr,"Был достигнут конец файла %s.\n", target_name);
    if(ferror(trg)!=0)
        fprintf(stderr,"Была ошибка в файле %s.\n", target_name);

    if(fclose(trg)!=0)
    {
        fprintf(stderr,"Не могу закрыть целевой файл %s.\n", target_name);
        exit(EXIT_FAILURE);
    }
    puts("Вот и всё!");
    return 0;
}
void add_text(FILE *source, FILE *target)
{
    size_t bytes;
    static char temp[BUFSIZE];
    while((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0)
        fwrite(temp,sizeof(char),bytes,target);
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
        else
            while(getchar()!='\n')
                continue;
    }
    return result;
}
